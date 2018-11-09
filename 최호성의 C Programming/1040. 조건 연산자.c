#include <stdio.h>

void main(void)
{
    int nA = 10, nB = 20;
    
    nA > nB ? nA++ : nB++;
    printf("%d, %d\n", nA, nB);
    printf("%d\n", nA < nB ? nA : nB);
    printf("%s\n", nA + 20 < nB ? "Big" : "Small");
}

//  10, 21
//  10
//  Small
