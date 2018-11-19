#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 1, cPrev = 1;
    for (i = 0; i < 5; i++)
    {
        if (cPrev % 5 == 1)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d\t", k);
                cPrev = k;
                k++;
            }
            printf("\n");
        }
        else if (cPrev % 5 == 0)
        {
            k = cPrev + 5;
            for (j = 0; j < 5; j++)
            {
                printf("%d\t", k);
                cPrev = k;
                k--;
            }
            printf("\n");
            k = cPrev + 5;
        }
    }
}
