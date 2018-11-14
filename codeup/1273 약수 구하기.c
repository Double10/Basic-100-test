#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            printf("%d ", j);
        }
    }
}
