#include <stdio.h>

int main(void){
    char o;
    int x, y;
    while (1) {
        printf("수 식 을 입 력 하 세 요: ");
        scanf("%d %c %d", &x, &o, &y);
        if (o == '+') {
            printf("%d %c %d = %d\n", x, o, y, x + y);
        }
        else if (o == '-') {
            printf("%d %c %d = %d\n", x, o, y, x - y);
        }
        else if (o == '*') {
            printf("%d %c %d = %d\n", x, o, y, x * y);
        }
        else if (o == '/') {
            printf("%d %c %d = %d\n", x, o, y, x / y);
        }
        else if (o == '%') {
            printf("%d %c %d = %d\n", x, o, y, x % y);
        }
        else {
            printf("입 력 이 잘 못 되 었 습 니 다. \n");
        }
        getchar();
        printf("프 로 그 램 을  종 료 하 시 겠 습 니 까 ? (y/n) ");
        scanf("%c", &o);
        if (o == 'n' || o == 'N') {
            continue;
        }
        else if (o == 'y' || o == 'Y') {
            break;
        }
        else{
            printf("입 력 이  잘 못  되 었 습 니 다. \n");
        }
    }
    return 0;
}
// 수식
