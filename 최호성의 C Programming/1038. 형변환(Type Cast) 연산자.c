#include <stdio.h>

void main(void)
{
    int nData = 25, nNewData = 10;
    unsigned char byData = 'A';
    
    printf("%.1f\n", nData / nNewData);
    printf("%.1f\n", (double)nData / nNewData);
    printf("%.1f\n", nData / (double)nNewData);
    printf("%.1f\n", (double)(nData / nNewData));
    byData = (unsigned char)300;
    // unsigned char 300 -> 0001 0010 1100 -> 1byte 보다 크다.
    // 그러므로 에러가 발생 -> 정확한 연산을 못함.
    printf("%d\n", (int)byData);
}

//  0.0     -> 에러: int 형을 "%.1f" 로 출력했다
//  2.5
//  2.5
//  2.0     -> int 형 2를 float로 출력 했다.
//  44      -> 에러
