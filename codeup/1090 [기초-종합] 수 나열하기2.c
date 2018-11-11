#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0,
        a = 0;
    scanf("%d %d %d", &i, &j, &k);
    for (a = 1; a <= k; a++)
    {
        if (a == k)
        {
            printf("%d", i);
        }
        i = i * j;
    }
}
