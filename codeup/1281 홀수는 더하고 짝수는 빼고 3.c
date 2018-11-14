#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, Sum = 0,
        i = 0;
    scanf("%d %d", &a, &b);
    for (i = a; a <= b; a++)
    {
        if (a % 2 == 0 && a == i)
        {
            Sum = Sum - a;
            printf("-%d", a);
            
        }
        else if (a % 2 == 1 && a == i)
        {
            Sum = Sum + a;
            printf("%d", a);
        }
        if (a % 2 == 0 && a > i)
        {
            Sum = Sum - a;
            printf("-%d", a);
        }
        
        else if (a % 2 == 1 && a > i)
        {
            Sum = Sum + a;
            printf("+%d", a);
        }
    }
    if (Sum > 0)
    {
        printf("=+%d", Sum);
    }
    else if (Sum < 0)
    {
        printf("=%d", Sum);
    }
    else
    {
        printf("=%d", Sum);
    }
}
