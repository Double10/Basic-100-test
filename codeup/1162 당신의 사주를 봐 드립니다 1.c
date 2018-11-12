#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if ((i - j + k) % 5 == 0)
    {
        printf("대박");
    }
    else
    {
        printf("그럭저럭");
    }
}


