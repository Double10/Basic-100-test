#include <stdio.h>
void main(void)
{
    int nData = 10, nNewData = 20;
    int x = 0, y = 0;
    
    printf("%d\n", nData && nNewData);
    printf("%d\n", nData && x);
    printf("%d\n", nData || x);
    printf("%d\n", x || y);
    printf("%d\n", x && y);
}

//  1
//  0
//  1
//  0
//  0
