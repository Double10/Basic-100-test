#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, l = 0,
        a = 0;
    scanf("%d %d %d %d", &i, &j, &k, &l);
    for (a = 1; a <= l; a++)
    {
        if (a == l)
        {
            printf("%d", i);
        }
        i = i * j + k;
    }
}
