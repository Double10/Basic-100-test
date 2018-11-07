#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[10] = "1Touch";
    char result[7] = "홍길동";
    strcpy(result, input);
    printf("문자열 복사 : %s\n", result);
    return 0;
}

// Strcpy 함수 - 문자열 변환

// Result: 문자열 복사: 1Touch
