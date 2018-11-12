#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if (i <= j && j <= k)
    {
        printf("%d %d %d", i, j, k);
    }
    
    else if (i < j && k < j && i <= k)
    {
        printf("%d %d %d", i, k, j);
    }
    
    if (j < k && k <= i)
    {
        printf("%d %d %d", j, k, i);
    }
    
    else if (j < k && i < k && j < i)
    {
        printf("%d %d %d", j, i, k);
    }
    
    if (k <= j && j < i)
    {
        printf("%d %d %d", k, j, i);
    }
    
    else if (k < j && i <= j && k < i)
    {
        printf("%d %d %d", k, i, j);
    }
    
}
