#include <stdio.h>

int main(void)
{
    int i = 0;
    scanf("%d", &i);
    
    if (i <= 10)
    {
        printf("정상");
    }
    else if (10 < i && i <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }

}

