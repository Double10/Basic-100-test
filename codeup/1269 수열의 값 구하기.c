#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
    scanf("%d %d %d %d", &i, &j, &k, &n);
    for (l = 0; l < n; l++)
    {
        if (l > 0)
        {
            m = i * j + k;
            i = m;
        }
        else
        {
            m = i;
        }
    }
    printf("%d", m);

}
