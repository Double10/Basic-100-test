#include <stdio.h>
void main(void)
{
    int nResult = 0x11223344;
    
    nResult &= 0xFFFF0000;
    printf("%X\n", nResult);
    
    nResult >>= 16;
    printf("%X\n", nResult);
    
    nResult |= 0x33440000;
    printf("%X\n", nResult);
}

// 11220000
// 1122
// 3345122

