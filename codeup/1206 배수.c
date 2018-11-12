#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 0, j = 0;
    scanf("%d %d", &i, &j);
    if (i % j == 0)
    {
        printf("%d*%d=%d", j, i/j, i);
    }
    else if (j % i == 0)
    {
        printf("%d*%d=%d", i, j/i, j);
    }
    else
    {
        printf("none");
    }
}

