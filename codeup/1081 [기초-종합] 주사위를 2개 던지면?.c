#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, a = 0;
    scanf("%d %d", &i, &j);
    for (k = 1; k <= i; ++k)
    {
        for (a = 1; a <= j; ++a)
        {
            printf("%d %d\n", k, a);
        }
    }
}
