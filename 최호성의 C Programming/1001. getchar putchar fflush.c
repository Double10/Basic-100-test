#include <stdio.h>
int main(void)
{
    char ch;
    ch = getchar();
    putchar(ch);
    ch = getchar();
    putchar(ch);
    fflush(stdin);
    ch = getchar();
    putchar(ch);
}
