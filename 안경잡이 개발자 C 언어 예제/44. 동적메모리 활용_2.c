#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, x, y;
    int** pptr = (int**)malloc(sizeof(int*) * 8);
    for (i = 0; i < 8; i++)
    {
        *(pptr + i) = (int *)malloc(sizeof(int) * 6);
    }
    
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 6; x++)
        {
            *(*(pptr + y) + x) = 6 * y + x;
        }
    }
    
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 6; x++)
        {
            printf("%3d", *(*(pptr + y) + x));
        }
        printf("\n");
    }
    
    for (y = 0; y < 8; y++)
    {
        free(*(pptr + y));
    }
    
    return 0;
}

//      0  1  2  3  4  5
//      6  7  8  9 10 11
//      12 13 14 15 16 17
//      18 19 20 21 22 23
//      24 25 26 27 28 29
//      30 31 32 33 34 35
//      36 37 38 39 40 41
//      42 43 44 45 46 47
