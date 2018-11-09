#include <stdio.h>
int main(void)
{
    int a = 0;
    scanf("%d", &a);
    a = a & 0x8;      // 주의: 0x1000 아님
                      //      0x8 = 1000 (2)
    printf("%X\n", a);
}
