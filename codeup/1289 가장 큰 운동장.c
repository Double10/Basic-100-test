#include <stdio.h>

int main(void)
{
    int a1 = 0, a2 = 0,
        b1 = 0, b2 = 0,
        c1 = 0, c2 = 0,
        sMax = 0;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);
    sMax = a1 * a2 > b1 * b2 ? a1 * a2 : b1 * b2;
    sMax = sMax > c1 * c2 ? sMax : c1 * c2;
    printf("%d", sMax);
}
