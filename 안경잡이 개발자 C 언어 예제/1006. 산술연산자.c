#include <stdio.h>

int main(void){
    int x = 100;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x += 50;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x -= 50;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x *= 50;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x /= 50;
    printf("현재 x의 값은 %d 입니다. \n", x);
    x %= 3;
    printf("현재 x의 값은 %d 입니다. \n", x);
    return 0;
}

// result: 현재 x의 값은 100 입니다.
// 현재 x의 값은 150 입니다.
// 현재 x의 값은 100 입니다.
// 현재 x의 값은 5000 입니다.
// 현재 x의 값은 100 입니다.
// 현재 x의 값은 1 입니다.
