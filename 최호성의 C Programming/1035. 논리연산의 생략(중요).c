#include <stdio.h>

void main(void)
{
    int k, x = -1, y = -1, z = 1;
    k = ++x || ++y && ++z;
    printf("%d %d %d %d\n", k, x, y, z);
    
    x = -1, y = -1, z = 1;
    k = x++ || ++y && ++z;
    printf("%d %d %d %d\n", k, x, y, z);
}

//  0 0 0 1
//  1 0 -1 1
