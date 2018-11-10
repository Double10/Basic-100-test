#include <stdio.h>
int main(void)
{
    int a, b, c, nMin;
    scanf("%d %d %d", &a, &b, &c);
    nMin = a > b ? b : a;
    nMin = nMin > c ? c : nMin;
    printf("%d", nMin);
}

