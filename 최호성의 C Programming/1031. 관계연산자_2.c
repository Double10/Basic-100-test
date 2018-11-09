#include <stdio.h>

void main(void)
{
    int nData = 10, nNewData = 20;
    int nResult = 10;
    
    printf("%d\n", nNewData == nData + nResult);
    printf("%d\n", nNewData - 10 != nData);
    printf("%d\n", nData == nResult++);
    printf("%d\n", nData == nResult);
    printf("%d\n", nData == --nResult);
}

//  1
//  0
//  1
//  0
//  1
