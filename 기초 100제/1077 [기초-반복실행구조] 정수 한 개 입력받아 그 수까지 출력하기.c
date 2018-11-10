#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    scanf("%d", &a);
    c = a;
    for (b = 0; b <= c; b++)
    {
        printf("%d\n", c - a);
        --a;
    }
}
