#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d", &i, &j);
    if (i < j)
    {
        for (k = i; k <= j; ++k)
        {
            printf("%d ", i);
            ++i;
        }
    }
    else
    {
        for (k = j; k <= i; ++k)
        {
            printf("%d ", j);
            ++j;
        }
    }
}

