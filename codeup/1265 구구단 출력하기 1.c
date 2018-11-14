#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d", &i);
    for (j = 1; j <= 9; j++)
    {
        printf("%d*%d=%d\n", i, j, i * j);
    }
}
