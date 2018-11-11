#include <stdio.h>
int main(void)
{
    int i = 0;
    scanf("%d", &i);
    if ((50 <= i && i <= 70) || (i % 6 == 0))
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
}
