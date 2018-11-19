#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 1, l = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", l);
            l++;
            if (i == j)
            {
                printf("\n");
                break;
            }
        }
    }
}
