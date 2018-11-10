#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    scanf("%1d %1d %1d %1d %1d", &a, &b, &c, &d, &e);
    printf("[%d]\n", a * 10000);
    printf("[%d]\n", b * 1000);
    printf("[%d]\n", c * 100);
    printf("[%d]\n", d * 10);
    printf("[%d]\n", e * 1);
}

/*
%1d 를 사용하면 입력 받는 숫자를 1개씩 잘라
 a, b, c, d, e, 변수에 저장할 수 있다
