#include <stdio.h>
int main(void)
{
    int a = 0;
    scanf("%d", &a);
    a &= ~0x00000008; // a &= 0xFFFFFFF7 과 같음
    printf("%d\n", a);
}
