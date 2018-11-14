#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, iMax = 0, n = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &j);
        if (iMax >= j)
        {
            iMax = iMax;
        }
        else
        {
            iMax = j;
        }
    }
    printf("%d", iMax);

}
