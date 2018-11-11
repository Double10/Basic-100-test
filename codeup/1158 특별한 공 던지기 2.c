#include <stdio.h>
int main(void)
{
    float i = 0;
    scanf("%f", &i);
    if ((30 <= i && i <= 40) || (60 <= i && i <= 70))
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
}
