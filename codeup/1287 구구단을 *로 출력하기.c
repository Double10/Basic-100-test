#include <stdio.h>

int main(void)
{
    int No = 0, i = 0, j = 0, k = 0, count = 0;
    scanf("%d", &No);
    for (i = 1; i <= 9; i++)
    {
        count = No * i;
        for (j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
