#include <stdio.h>
int main(void)
{
    int i = 0, k = 0, j = 0;
    scanf("%d", &i);
    j = i;
    for (k = 1; k <= j; k++)
    {
        if (k == 3 || k == 6 || k == 9)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", k);
        }
        i--;
    }
}
