#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        if (j % 3 == 0)
        {
            printf("");
        }
        else
        {
            printf("%d ", j);
        }
    }
}
