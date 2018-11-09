#include <stdio.h>

void main(void)
{
    int nInput = 0, nMax = 0;
    scanf("%d", &nInput);
    nMax = nInput;
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;
    printf("%d\n", nMax);
}


