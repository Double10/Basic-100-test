#include <stdio.h>
int main(void)
{
    int nInput = 0, i = 0, j = 0;
    scanf("%d", &nInput);
    for (i = 0; i < nInput; i++)
    {
        for (j = 0; j < nInput; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
