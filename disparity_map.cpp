#include "disparity_map.h"

// Funzione per il calcolo del valore assoluto
ptype abs_ptype (ptype a_val, ptype b_val)
{
	if (a_val >= b_val)
		return a_val - b_val;
	else
		return b_val - a_val;
}


// Funzione per il calcolo del costo puntuale (differenza in valore assoluto fra i livelli di colore di 2 pixel)
ptype cost_d (ptype pixel_1, ptype pixel_2)
{
	return abs_ptype(pixel_1, pixel_2);
}


// Funzione che restituisce il valore di permeabilità fra i livelli di colore di 2 pixel
ap_uint<10> permeability (ptype pixel_1, ptype pixel_2, ap_uint<10> exponentials[])
{
	return exponentials[ abs_ptype(pixel_1, pixel_2) ];
}


// Funzione che restituisce la mappa di disparità
void disparityMap (ptype leftImage[HEIGHT * WIDTH],
					ptype rightImage[HEIGHT * WIDTH],
					ptype dMap[HEIGHT * WIDTH])
{
	// Vettore che contiene i 256 esponenziali (shiftati di 1024)
	static ap_uint<10> exponentials[256] = {1023, 989, 957, 925, 895, 865, 837, 810, 783, 757, 733, 708, 685, 663, 641, 620, 600, 580, 561, 543, 525, 508, 491, 475, 459, 444, 430, 415, 402, 389, 376, 364, 352, 340, 329, 318, 308, 298, 288, 278, 269, 260, 252, 243, 235, 228, 220, 213, 206, 199, 193, 186, 180, 174, 169, 163, 158, 153, 147, 143, 138, 133, 129, 125, 121, 117, 113, 109, 106, 102, 99, 95, 92, 89, 86, 83, 81, 78, 75, 73, 71, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 49, 47, 46, 44, 43, 41, 40, 39, 37, 36, 35, 34, 33, 31, 30, 29, 28, 27, 27, 26, 25, 24, 23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 14, 13, 13, 12, 12, 12, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	// Vettore che memorizza l'ultima riga di pixel dell'immagine left
	static ptype pixel_values_left[WIDTH];

	// Vettore che memorizza gli ultimi DMAX + 1 pixel dell'immagine right
	// L'elemento con indice 0 contiene l'ultimo pixel letto
	static ptype pixel_values_right[DMAX + 1];

	// Vettore che memorizza i costi per right scan per ogni pixel dell'ultima linea (per ogni d)
	// BRAM in hardware
	static ap_uint<18> cost_last_line[WIDTH][DMAX + 1];
	
	// Vettore che memorizza temporaneamente i costi del pixel appena analizzato (per ogni d)
	// Utilizzato per il right scan del pixel successivo per evitare un accesso a BRAM
	static ap_uint<18> cost_d_temp_right[DMAX + 1];

	// Costo temporaneo del pixel in diagonale
	ap_uint<18> cost_d_temp_diagonal;

	ap_uint<16> cost_d_actual;
	ap_uint<18> cost_d_right;
	ap_uint<18> cost_d_diagonal;

	ap_uint<18> min_cost;

	ptype assigned_d;

	// Permeabilità
	ap_uint<10> mu_right;
	ap_uint<10> mu_diagonal;


	// Scansione per righe
	Loop_Row:	for(int row = 0; row < HEIGHT; row++)
	{
		// Scansione per colonne e right scan
		Loop_Col:	for(int col = 0; col < WIDTH; col++)
		{
			// Lettura pixel immagine left
			pixel_values_left[col] = leftImage[row * WIDTH + col];

			// Aggiornamento pixel immagine di destra
			for (int q = DMAX; q > 0; q--)
				pixel_values_right[q] = pixel_values_right[q - 1]; // Shift pixel precedenti
			pixel_values_right[0] = rightImage[row * WIDTH + col]; // Lettura nuovo pixel immagine right

			// Calcolo permeabilità per il right scan
			if (col > 0)
				mu_right = permeability(pixel_values_left[col], pixel_values_left[col - 1], exponentials);

			// Calcolo permeabilità per il diagonal scan
			// pixel_values_left[col + 1] rappresenta il pixel in diagonale (alto a destra) rispetto al pixel attuale
			if ((row > 0) && (col < WIDTH - 1))
				mu_diagonal = permeability(pixel_values_left[col], pixel_values_left[col + 1], exponentials);

			assigned_d = 0;
			min_cost = 65535;

			// Scansione per ogni disparità
			Loop_d: for(int d = 0; d <= DMAX; d++)
			{
				// Lettura costo pixel in diagonale da BRAM
				cost_d_temp_diagonal = cost_last_line[col + 1][d];

				if (col - d >= 0)
				{
					cost_d_actual = cost_d(pixel_values_left[col], pixel_values_right[d]);

					// Right scan
					if ((col > 0) && (col - 1 - d >= 0))
						cost_d_right = mu_right * cost_d_temp_right[d];

					cost_d_actual += cost_d_right(17,10); // Shift di 10 bit (1024)

					// Memorizzo il costo nel vettore temporaneo
					cost_d_temp_right[d] = cost_d_actual;

					// Diagonal scan
					if ((row > 0) && (col < WIDTH - 1))
						cost_d_diagonal = mu_diagonal * cost_d_temp_diagonal;

					cost_d_actual += cost_d_diagonal(17,10); // Shift di 10 bit (1024)

					if(cost_d_actual < min_cost)
					{
						min_cost = cost_d_actual;
						assigned_d = d;
					}
				}

				// Scrittura costo calcolato su BRAM
				cost_last_line[col][d] = cost_d_temp_right[d];
			}

			// Risultato scritto in uscita
			dMap[row * WIDTH + col] = assigned_d * 255 / DMAX;
		}
	}
}
