#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 170)
    {
        printf("CRASH %d", a);
    }
    else if (b <= 170)
    {
        printf("CRASH %d", b);
    }
    else if (c <= 170)
    {
        printf("CRASH %d", c);
    }
    else
    {
        printf("PASS");
    }
    
    
}
