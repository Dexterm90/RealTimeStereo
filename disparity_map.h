#include "ap_int.h"

#define BIT_ACCURATE

// Image dim
#define HEIGHT 288
#define WIDTH 384

// Shift factor
#define shift 1023

// Max disparity
#define DMAX 15

// 8 bit pixel type
typedef ap_uint<8> ptype;

// Disparity map function
void disparityMap(ptype leftImage[HEIGHT * WIDTH],
					ptype rightImage[HEIGHT * WIDTH],
					ptype dMap[HEIGHT * WIDTH]);
