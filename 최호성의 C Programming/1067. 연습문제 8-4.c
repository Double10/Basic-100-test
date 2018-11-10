#include <stdio.h>
int main(void)
{
    int nInput = 0, nMax = 0, nMin = 0;
    scanf("%d", &nInput);
    nMax = nInput;
    nMin = nInput;
    scanf("%d", &nInput);
    if (nMax > nInput)
    {
        nMax = nMax;
        nMin = nInput;
    }
    else
    {
        nMax = nInput;
        nMin = nMax;
    }
    
    scanf("%d", &nInput);
    if (nMax > nInput)
    {
        nMax = nMax;
    }
    else
    {
        nMax = nInput;
        if (nMin > nInput)
        {
            nMin = nInput;
        }
        else
        {
            nMin = nMin;
        }
    }
    
    scanf("%d", &nInput);
    if (nMax > nInput)
    {
        nMax = nMax;
    }
    else
    {
        nMax = nInput;
        if (nMin > nInput)
        {
            nMin = nInput;
        }
        else
        {
            nMin = nMin;
        }
    }
    
    scanf("%d", &nInput);
    if (nMax > nInput)
    {
        nMax = nMax;
    }
    else
    {
        nMax = nInput;
        if (nMin > nInput)
        {
            nMin = nInput;
        }
        else
        {
            nMin = nMin;
        }
    }
    printf("nMax: %d\nnMin: %d\n", nMax, nMin);
}
