#include <stdio.h>

void main(void)
{
    int nData = -123;
    
    printf("%X\n", nData);
    //  123의 16진수를 구한다 (32bits) 0x0000007B
    //  1의 보수를 구한다.(32bits)     
    //  2의 보수를 구한다.
    
    printf("%X\n", nData >> 3);
    
}
