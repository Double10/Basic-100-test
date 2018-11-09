#include <stdio.h>
void main(void)
{
    int nA = 0, nB = 0;
    nA = (nB = 10, nB + 2);
    printf("%d, %d\n", nA, nB);
}

// 12. 10

// 콤마 연산자는 잘 사용하지 않음
