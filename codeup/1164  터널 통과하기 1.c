#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if (i > 170 && j > 170 && k > 170)
    {
        printf("PASS");
    }
    else
    {
        printf("CRASH");
    }
}
