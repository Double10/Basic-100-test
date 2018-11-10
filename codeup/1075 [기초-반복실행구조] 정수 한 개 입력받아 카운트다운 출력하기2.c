#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d", &i);
    for (j = i; j >= 0; j--)
    {
        --i;
        printf("%d\n", i);
        if (i == 0) {
            break;
        }
        
    }
}
