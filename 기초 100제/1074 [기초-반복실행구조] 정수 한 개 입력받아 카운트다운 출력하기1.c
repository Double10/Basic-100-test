#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d", &i);
    for (j = i; j >= 1; j--)
    {
        printf("%d\n", i);
        --i;
        
    }
}
