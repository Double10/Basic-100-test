#include <stdio.h>

void main(void)
{
    int nData = 10, nNewData = 20;
    int nResult = 10;
    
    printf("%d\n", nData == nResult || nData > nNewData);
    printf("%d\n", nData != nResult && nData < nNewData);
    printf("%d\nn", nData >= nResult && ++nNewData);
}


//  1
//  0
//  1
