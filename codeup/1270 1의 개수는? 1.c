#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, n = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 10 == 1)
        {
            j++;
        }
    }
    printf("%d", j);

}
