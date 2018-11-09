#include <stdio.h>

void main(void)
{
    int a = 0, b = 0, c = 0, nMax = 0;
    scanf("%d %d %d", &a, &b, &c);
    nMax = a > b ? a : b;
    //a > b ? a : b 의 값을 nMax에 넣는다
    printf("%d\n", c > nMax ? nMax = c : nMax);
}


