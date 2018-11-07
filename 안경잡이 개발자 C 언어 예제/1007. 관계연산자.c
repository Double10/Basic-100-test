#include <stdio.h>

int main(void){
    int x = 50, y = 30;
    printf("x가 y와 같은가 ? %d\n", x == y);
    printf("x가 y와 같은가 ? %d\n", x != y);
    printf("x가 y와 큰가 ? %d\n", x > y);
    printf("x가 y와 작은가 ? %d\n", x < y);
    printf("x가 y와 넣으면 ? %d\n", x = y);
    return 0;
}

// result: x가 y와 같은가 ? 0
// x가 y와 같은가 ? 1
// x가 y와 큰가 ? 1
// x가 y와 작은가 ? 0
// x가 y와 넣으면 ? 30
