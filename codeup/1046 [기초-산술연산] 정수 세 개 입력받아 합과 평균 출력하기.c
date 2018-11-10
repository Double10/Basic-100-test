#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%u\n", a + b + c);
    printf("%.1f\n", (float)(a + b + c) / (float)3);

}


