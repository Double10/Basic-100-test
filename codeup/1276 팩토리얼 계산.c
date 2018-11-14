#include <stdio.h>

int main(void)
{
    int n = 0, i = 0, Sum = 1;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        Sum = Sum * i;
    }
    printf("%d", Sum);
    
    
}
