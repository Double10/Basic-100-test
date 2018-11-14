#include <stdio.h>
int main(void)
{
    float a = 0, b = 0, c = 0, d = 0;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if (a / b > c / d)
    {
        printf(">");
    }
    else if (a / b == c / d)
    {
        printf("=");
    }
    else if (a / b < c / d)
    {
        printf("<");
    }
}

