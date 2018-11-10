#include <stdio.h>
int main(void)
{
    int i = 0, a = 0, nMax = 0, nMin = 0;
        scanf("%d", &a);
        nMax = nMin = a;
    for (i = 0; i < 4; ++i)
    {
        scanf("%d", &a);
        
        if (a > nMax)
            nMax = a;
        else if (a < nMin)
            nMin = a;
    }
    printf("Max: %d\nMin: %d\n", nMax, nMin);
}
