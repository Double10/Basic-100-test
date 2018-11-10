#include <stdio.h>
int main(void)
{
    int a = 0, Sum = 0, c = 0;
    scanf("%d", &a);
    for (c = a; c >= 1; --c)
    {
        if (a % 2 == 0)
        {
            Sum = Sum + a;
        }
        --a;
    }
    printf("%d", Sum);
}
