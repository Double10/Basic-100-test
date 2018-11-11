#include <stdio.h>
int main(void)
{
    int h = 0, b = 0, c = 0, s = 0;
    float M = 0;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    M = h * b * c * s;
    M = M / 8 / 1024 / 1024;
    printf("%.1f MB", M);
}
