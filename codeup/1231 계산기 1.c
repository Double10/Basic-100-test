#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;
    char c = 0;
    scanf("%d%c%d", &a, &c, &b);
    switch (c)
    {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            printf("%.2f", (float)a / b);
            break;
    }
    
}
