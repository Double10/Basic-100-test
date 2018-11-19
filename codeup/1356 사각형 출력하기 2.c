#include <stdio.h>

int main(void)
{
    int No = 0, i = 0, j = 0, k = 0;
    scanf("%d", &No);
    for (i = 1; i <= No; i++)
    {
        printf("*");
    }
    printf("\n");
    
    for (j = 0; j < No-2; j++)
    {
        printf("*");
        for (k = 0; k < No - 2; k++)
        {
            printf(" ");
        }
        printf("*\n");
        
    }
    
    for (i = 1; i <= No; i++)
    {
        printf("*");
    }
    
    
}
