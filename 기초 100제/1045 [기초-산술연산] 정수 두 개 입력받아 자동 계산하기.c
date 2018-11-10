#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%u\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%.2f\n", (float)a / (float)b);
}


