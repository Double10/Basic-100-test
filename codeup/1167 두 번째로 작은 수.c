#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if ((i <= j && j < k) || (k <= j && j < i))
    {
        printf("%d", j);
    }
    else if ((j <= i && i < k) || (k <= i && i < j))
    {
        printf("%d", i);
    }
    else
    {
        printf("%d", k);
    }
}
