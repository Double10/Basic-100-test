#include <stdio.h>
void main(void)
{
    int nResult = 0x11223344;
    
    printf("%X\n", nResult & 0xFFFF0000);
    printf("%X\n", nResult >> 16);
    //  오른쪽으로 shift 할때 왼쪽수를 2진수로 변환하여
    //  왼쪽 끝이 1이면 1로 패딩이 되고
    //  왼쪽 끝이 0이면 0 으로 패딩이 된다.
    //  (signbit 에 의하여 음수면 1이고 양수면 0이 되기 때문이다.)
    
    printf("%X\n", nResult << 8);
    printf("%X\n", nResult | 0x2211FFFF);
    printf("%X\n", nResult ^ 0x2211FFFF);
    
    printf("%X\n", ~nResult);
    // Not 연산자: 1의 보수를 취하면 된다.
}
