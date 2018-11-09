#include <stdio.h>

void main(void)
{
    int nData = 10;
    int nResult = 0;
    
    nResult += nData;
    printf("%d, %p\n", nData, &nData);
    printf("%d, %p\n", nResult, &nResult);
}


// 10, 0x7ffeefbff5dc -> 64bits
// 10, 0x7ffeefbff5d8 -> 64bits
