#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ap_bmp.h"
#include "disparity_map.h"

#define LEFT 0 // immagine left
#define RIGHT 1 // immagine right

#define PATH_IMG_LEFT "./Tsukuba_L.bmp"
#define PATH_IMG_RIGHT "./Tsukuba_R.bmp"
#define PATH_IMG_OUT "./Tsukuba_O_right_diagonal.bmp"


int main(int argc, char* argv[])
{
	ptype *left_img  = (ptype*)malloc(sizeof(ptype)*(HEIGHT * WIDTH));
	ptype *right_img  = (ptype*)malloc(sizeof(ptype)*(HEIGHT * WIDTH));
	ptype *out_img = (ptype*)malloc(sizeof(ptype)*(HEIGHT * WIDTH));

	unsigned char *R[2], *G[2], *B[2];

	for(int k = 0; k < 2; k++)
	{
		R[k] = (unsigned char*) malloc(HEIGHT * WIDTH * sizeof(unsigned char));
		G[k] = (unsigned char*) malloc(HEIGHT * WIDTH * sizeof(unsigned char));
		B[k] = (unsigned char*) malloc(HEIGHT * WIDTH * sizeof(unsigned char));
	}

	unsigned char *out =(unsigned char *)malloc(HEIGHT * WIDTH * sizeof(unsigned char));

    // Lettura immagine sinistra 
    if (BMP_Read(PATH_IMG_LEFT, HEIGHT, WIDTH, R[LEFT], G[LEFT], B[LEFT]) != 0)
    {
    	printf("no file\n");
    	return 1;
    }
	
    // Lettura immagine destra
	if (BMP_Read(PATH_IMG_RIGHT, HEIGHT, WIDTH, R[RIGHT], G[RIGHT], B[RIGHT]) != 0)
	{
		printf("no file\n");
    	return 1;
	}

	// Inizializzazione input
	for(int i = 0; i < HEIGHT; i++)
		for(int j = 0; j < WIDTH; j++)
		{
		    left_img[i * WIDTH + j] = R[LEFT][i * WIDTH + j];
		    right_img[i * WIDTH + j] = R[RIGHT][i * WIDTH + j];
		}

	// Calcolo della disparity map
    disparityMap(left_img, right_img, out_img);
    
	// Scrittura immagine di output
    for(int i = 0; i < HEIGHT; i++)
    	for(int j = 0; j < WIDTH; j++)
    		out[i * WIDTH + j] = out_img[i * WIDTH + j];

	if (BMP_Write(PATH_IMG_OUT, HEIGHT, WIDTH, out, out, out) != 0)
	{
	    printf("WriteBMP %s failed\n", PATH_IMG_OUT);
	    return 1;
	}
	
	for(int k = 0; k < 2; k++)
	{
		free(R[k]); 
		free(G[k]);
		free(B[k]);
	}
	free(out);

	return 0;
}
