#include <stdio.h>

void main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);
    
    while (nInput > 0)
    {
        printf("%dth printf()\n", nInput);
        nInput--;
    }
}
