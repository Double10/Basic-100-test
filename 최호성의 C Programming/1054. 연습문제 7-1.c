#include <stdio.h>

int main(void)
{
    int nInput = 0, nMax = 0;
    scanf("%d", &nInput);
    nMax = nInput;
    scanf("%d", &nInput);
    if (nInput > nMax)
    {
        nMax = nInput;
    }
    
    scanf("%d", &nInput);
    if (nInput > nMax)
    {
        nMax = nInput;
    }
    
    scanf("%d", &nInput);
    if (nInput > nMax)
    {
        nMax = nInput;
    }
    
    scanf("%d", &nInput);
    if (nInput > nMax)
    {
        nMax = nInput;
    }
    
    printf("%d", nMax);
}
