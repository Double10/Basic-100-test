#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    for (j = 2; j <= 9; ++j)
    {
        for (i = 1; i <= 9; ++i)
        {
            printf("%d * %d = %d\n", j, i, j * i);
        }
        putchar('\n');
    }
}
