#include <stdio.h>
int main(void)
{
    int a = 10, i = 0, Sum = 0;
    for (a = 10; a <= 100; ++a)
    {
        if (a % 4 == 0)
        {
            Sum = Sum + a;
            i++;
        }
        continue;
    }
    printf("%d %d\n", i, Sum);
}
