#include <stdio.h>

int main (void){
    
    int year = 2016;
    if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0){
        printf("%d년은 윤년입니다.\n", year);
    }
    else{
        printf("%d년은 윤년d이 아닙니다.\n", year);
    }
}

//  2016년은 윤년입니다.
