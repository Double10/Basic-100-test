#include <stdio.h>

int main(void)
{
    int n = 0, i = 0, j = 0;
    scanf("%d", &i);
        j = i;
    if (i > 1)
    {
        for (i = i; i >= 1; i--)
        {
            scanf("%d", &n);
            
            if (j == i)
            {
                printf("%d ", n);
            }
            else if ( j / 2 + 1 == i)
            {
                printf("%d ", n);
            }
            else if (i == 1)
            {
                printf("%d", n);
            }
        }
    }
    else
    {
        scanf("%d", &n);
        printf("%d %d %d", n, n, n);
    }
    
    
}
