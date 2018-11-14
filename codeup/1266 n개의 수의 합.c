#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, Sum = 0;
    scanf("%d", &i);
    for (j = 0; j < i; j++)
    {
        scanf("%d", &k);
        Sum = Sum + k;
    }
    printf("%d", Sum);
}
