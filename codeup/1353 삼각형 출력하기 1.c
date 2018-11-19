#include <stdio.h>

int main(void)
{
    int No = 0, i = 0, j = 0;
    scanf("%d", &No);
    for (i = 1; i <= No; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
