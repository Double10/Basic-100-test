#include <stdio.h>

void main(void)
{
    int nData = 10, nNewData = 20;
    int nResult = 0;
    
    printf("%d\n", ++nData); // nData = 10 + 1;
    printf("%d\n", nData++); // nData = 11; nData = 11 + 1;
    
    nResult = ++nData + nNewData++; // nResult = (12 + 1) + 20;
    printf("%d\n", nResult);    // nResult = 33;
    printf("%d\n", nNewData);   // nNewData = 21;
}

//  11
//  11
//  33
//  21
