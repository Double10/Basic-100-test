#include <stdio.h>
int main(void)
{
    int w = 0, h = 0, b = 0;
    float M = 0;
    scanf("%d %d %d", &w, &h, &b);
    M = w * h * b;
    M = M / 8 / 1024 / 1024;
    printf("%.2f MB", M);
}
