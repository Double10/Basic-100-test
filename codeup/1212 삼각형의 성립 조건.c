#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if (i + j > k && k + j > i && k + i > j)
    {
        printf("yes");
    }
    
    
    else
    {
        printf("no");
    }
}

