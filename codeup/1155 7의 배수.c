#include <stdio.h>
int main(void)
{
    int i = 0;
    scanf("%d", &i);
    if (i % 7 == 0)
    {
        printf("multiple");
    }
    else
    {
        printf("not multiple");
    }
}
