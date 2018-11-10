#include <stdio.h>

int main(void)
{
    int i = 0;
    char a [21];
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("\'%c\'\n", a[i]);
    }
}
