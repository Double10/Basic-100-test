#include <stdio.h>
void main(void)
{
    char ch;
    
    while(1)
    {
        if((ch = getchar()) == '/')
            break;
        putchar(ch);
    }
}
