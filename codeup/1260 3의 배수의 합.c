#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0, Sum = 0;
    scanf("%d %d", &i, &j);
    for (k = i; k <= j; k++)
    {
        if (i % 3 == 0) {
            Sum = Sum + i;
        }
        i++;
    }
    printf("%d", Sum);
}

