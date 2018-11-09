#include <stdio.h>

void main(void)
{
    char ch = 'A';
    int nData = 15;
    float fData1 = 1.5f, fData2 = 3.4f;
    
    printf("%d\n", ch + 2);
    printf("%c\n", ch + 2);
    printf("%f\n", fData1 * 100 / fData2);
    printf("%f\n", fData2 / fData1);
    
    printf("%f\n", nData * 100 / 100);
    // 정수와 정수의 계산인데 결과를 float로 출력했기에 에러가 발생
    
    printf("%f\n", nData / 10 * 100.0f);
    // 정수와 정수 계산 결과 소수점 아래 절사 됨
    
    printf("%d\n", (int)((float)nData / 10 * 100.0f));
    // nData를 float로 바꾼 다음 계산 결과를 int 형으로 바꿈
    
    printf("%f\n", (float)nData * 100 / 100);
    // 자료형 앞에 (float) 붙이면 float로 출력, 소수점 아래 절사 되지 않음
    printf("%f\n", (float)(nData * 100) / 100);
    
    //  67
    //  C
    //  44.117645
    //  2.266667
    //  2.266667 (에러 MS에서는 0.000000 으로도 출력이 된다. )
    //  100.000000
    //  150
    //  15.000000
    //  15.000000
}
