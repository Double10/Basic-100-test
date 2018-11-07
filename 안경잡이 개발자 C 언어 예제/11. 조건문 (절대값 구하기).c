Example_11
#include <stdio.h>

int main(void){
    
    int x = -150;
    if(x < 0){
        x = -x;
    }
    printf("x의 절 대 값 은 %d 입 니 다.\n", x);
    return 0;
}

// x의 절 대 값 은 150 입 니 다.
