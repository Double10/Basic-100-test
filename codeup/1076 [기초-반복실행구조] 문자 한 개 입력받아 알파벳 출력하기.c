#include <stdio.h>
int main(void)
{
    char ch = 0;
    char i = 0;
    scanf("%c", &ch);
    for (i = 97; i <= ch; ++i)
    {
        printf("%c ", i);
    }
}
