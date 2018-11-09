#include <stdio.h>

void main(void)
{
    char szName[16] = {"A"};
    int nData = 10;
    
    printf("%d\n", sizeof(nData));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(szName));
    printf("%d\n", sizeof(szName + 1));  // 주소 + 정수 -> 주소
    printf("%d\n", sizeof(++nData));
    printf("%d\n", nData);
    
    
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof((short)100));
    
    printf("%d\n", sizeof(100));
    
    printf("%d\n", sizeof(100.0));
    printf("%d\n", sizeof(100.0f));
    printf("%d\n", sizeof(10.0 / 10));
    printf("%d\n", sizeof(10 / 10));
    
}

//  4
//  4
//  8   (64bits APP)
//  16
//  8   (64bits APP)
//  4
//  10

//  2   -> short(2byte)
//  2   -> short 형 100

//  4

//  8   -> 100.0  은 double(8byte)
//  4   -> 100.0f 은 float(4byte)
//  8   -> double 과 int(4byte) 산술결과는 double.
//  4   -> int 과 int 산술결과는 int(4byte)
