#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0, New;
    scanf("%d", &i);
    j = i / 10;
    k = i % 10;
    New = (k * 10 + j) * 2;
    if (New > 100)
    {
        New = New - 100;
    }
    
    printf("%d\n", New);
    
    if (New > 50)
    {
        printf("OH MY GOD");
    }
    else
    {
        printf("GOOD");
    }
    
}

