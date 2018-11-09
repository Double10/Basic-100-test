#include <stdio.h>
int main(void)
{
    char a [32];
    gets(a);
    printf("%p %s\n", a, a);
    return 0;
}

