#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputOne[5] = "a";
    char inputTwo[5] = "A";
    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
    return 0;
}

// strcmp 함수 (ASII Code 참조)
// Result: 32
