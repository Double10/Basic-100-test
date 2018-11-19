#include <stdio.h>

int main(void)
{
    int No = 0, i = 0, j = 0, k = 0;
    scanf("%d", &No);
    for (i = 1; i <= No; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = No; i <= j; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}
