#include <stdio.h>

int main(void)
{
    int i = 0;
    scanf("%d", &i);
    
    if (i >= 90)
    {
        printf("A");
    }
    else if (80 <= i && i < 90)
    {
        printf("B");
    }
    else if (70 <= i && i < 80)
    {
        printf("C");
    }
    else if (60 <= i && i < 70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

}

