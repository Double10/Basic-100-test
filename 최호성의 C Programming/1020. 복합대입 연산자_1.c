#include <stdio.h>

void main(void)
{
    int nResult = 0, nData = 10;
    
    nResult += 3;
    printf("nResult: %d\n", nResult);
    nResult *= nData;
    printf("nResult: %d\n", nResult);
    nResult /= 2;
    printf("nResult: %d\n", nResult);
    nResult -= nData - 5;
    printf("nResult: %d\n", nResult);
}

// 3
// 30
// 15
// 10
