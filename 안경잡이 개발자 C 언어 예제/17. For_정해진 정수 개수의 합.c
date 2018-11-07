#include <stdio.h>

int main (void){
    int number, x, i, sum = 0;
    printf("정수의 개수를 입력하세요 :");
    scanf("%d", &number);
    for (i = 0; i < number; i++) {
        printf("정수의 값을 입력하세요: ");
        scanf("%d", &x);
        sum += x;
    }
    printf("현재 정수의 값은 %d 입니다. \n", sum);
    return 0;
}
// 정해진 정수 개수의 합
