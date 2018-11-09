#include <stdio.h>

void main(void)
{
    int nResult = 0, nData = 10;
    
    nResult = 3;
    nResult = nData;
    nResult = nData = 10;
    
    printf("%d, %d\n", nResult, nData);
}

// Result: 10 10
