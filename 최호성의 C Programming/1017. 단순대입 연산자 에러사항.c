#include <stdio.h>

void main(void)
{
    char szName[16];
    const int nData = 10;
    
    // 아래 코드는 모두 오류이다.
    
     3 = 4;
    // L value 가 변수가 아니라 상수다.
    
     szName = 'A';
    // L value 가 변수가 아니라 메모리 주소다.
    
     nData = 20;
}
