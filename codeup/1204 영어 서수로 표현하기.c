#include <stdio.h>

int main(void)
{
    int i = 0;
    scanf("%d", &i);
    if (i < 10 && i % 10 == 1)
    {
        printf("%dst", i);
    }
    else if (i < 10 && i % 10 == 2)
    {
        printf("%dnd", i);
    }
    else if (i < 10 && i % 10 == 3)
    {
        printf("%drd", i);
    }
    else if (i > 20 && i % 10 == 1)
    {
        printf("%dst", i);
    }
    else if (i > 20 && i % 10 == 2)
    {
        printf("%dnd", i);
    }
    else if (i > 20 && i % 10 == 3)
    {
        printf("%drd", i);
    }
    else
    {
        printf("%dth", i);
    }

}

