#include <stdio.h>

int main(void)
{
    int i = 0;
    scanf("%d", &i);
    
    if (i > 0)
    {
        printf("양수");
    }
    else if (i < 0)
    {
        printf("음수");
    }
    else if (i == 0)
    {
        printf("0");
    }
}

