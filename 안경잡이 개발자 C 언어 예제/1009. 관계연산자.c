#include <stdio.h>

int main(void){
    int x = 50, y = 30;
    int absoluteX = (x > 0) ? x : -x;
    int max = (x > 0) ? x : y;
    int min = (x < 0) ? x : y;
    printf("x의 절대값은 %d입니다. \n", absoluteX);
    printf("x와 y중에서 최대값은 %d입니다. \n", max);
    printf("x와 y중에서 최소값은 %d입니다. \n", min);
    return 0;
}

// x의 절대값은 50입니다.
// x와 y중에서 최대값은 50입니다.
// x와 y중에서 최소값은 30입니다.
