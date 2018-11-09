#include <stdio.h>

void main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);
    
    do
    {
        printf("%dth printf()\n", nInput);
        nInput--;
    }
    while (nInput > 0);
}

// do while 문은 먼저 반복문을 한번은 꼭 실행한다
