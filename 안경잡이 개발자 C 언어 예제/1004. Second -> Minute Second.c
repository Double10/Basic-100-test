#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void){
    int input = 1000;
    int minute = input / SECOND_PER_MINUTE;
    int second = input % SECOND_PER_MINUTE;
    printf("%d분 %d초는 %d초 입니다.\n", minute, second, input);
    return 0;
}
// result: 16분 40초는 1000초 입니다.
