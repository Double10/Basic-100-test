#include <stdio.h>
int main(void)
{
    int i = 0;
    scanf("%d", &i);
    
    if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
