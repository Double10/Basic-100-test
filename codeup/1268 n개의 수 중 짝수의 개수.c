#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, count = 0;
    scanf("%d", &i);
    for (j = 0; j < i; j++)
    {
        scanf("%d", &k);
        if (k % 2 == 0)
        {
            count++;
        }
    }
    printf("%d", count);
}
