#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d", &i, &j);
    for (i = i; i < 90; i += 5)
    {
        k++;
    }
    printf("%d", j + k);
}
