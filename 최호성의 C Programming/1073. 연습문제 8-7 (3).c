#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 1, l = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i + j >= 4)
            {
                printf("%d", l);
                l++;
            }
            printf("\t");
        }
        printf("\n");
    }
}
