#include <stdio.h>
int main(void)
{
    int i = 0, k = 0, Sum = 0;
    scanf("%d", &i);
    for (k = 0; k < i; ++k)
    {
        Sum = Sum + k;
        if (Sum >= i)
        {
            break;
        }
    }
    printf("%d", k);
}

