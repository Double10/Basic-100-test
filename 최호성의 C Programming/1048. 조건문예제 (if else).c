#include <stdio.h>

void main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);
    if (nInput >= 10)
    {
        puts("10 이상");
    }
    else
    {
        puts("10 미만");
    }
}
