#include <stdio.h>
int main(void)
{
    float a = 0.0f, b = 0.0f;
    scanf("%f %f", &a, &b);
    printf("%.2f", (a+b)/2);
    return 0;
}
