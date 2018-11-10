#include <stdio.h>
int main(void)
{
    char i = 0, j = 0, k = 0;
    scanf("%c %c", &i, &j);
    if (i < j)
    {
        for (k = i; k <= j; ++k)
        {
            printf("%c ", i);
            ++i;
        }
    }
    else
    {
        for (k = j; k <= i; ++k)
        {
            printf("%c ", j);
            ++j;
        }
    }
}
