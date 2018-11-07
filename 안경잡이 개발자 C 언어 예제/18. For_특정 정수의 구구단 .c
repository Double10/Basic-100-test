#include <stdio.h>

int main(void){
    int x, i;
    printf("정 수 를 입 력 하 세 요:");
    scanf("%d", &x);
    for (i = 1; i <= 9; i++) {
        printf("%d X %d = %d\n", x, i, x * i);
    }
    return 0;
}
// 특정 정수의 구구단
