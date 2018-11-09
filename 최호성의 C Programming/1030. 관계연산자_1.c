#include <stdio.h>
void main(void)
{
    int nData = 10, nNewData = 20;
    int nResult = 10;
    
    printf("%d\n", nData == nResult);
    printf("%d\n", nData != nResult);
    printf("%d\n", nData > nNewData);
    printf("%d\n", nData < nNewData);
    printf("%d\n", nData >= nNewData);
    printf("%d\n", nData <= nNewData);
}
//  1
//  0
//  0
//  1
//  0
//  1
