#include <stdio.h>
int main(void)
{
    char a = 0;
    while (1)
    {
        scanf("%c ", &a);
        if (a != 'q')
        {
            printf("%c\n", a);
        }
        else
        {
            printf("%c", a);
            break;
        }
    }
}
