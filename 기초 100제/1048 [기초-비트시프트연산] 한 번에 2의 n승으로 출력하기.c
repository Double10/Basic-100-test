#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%u", a<<b);

}

// 왼쪽으로 한칸 shift 할때마다 2가 곱해진다
