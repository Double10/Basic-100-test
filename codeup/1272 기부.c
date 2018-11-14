#include <stdio.h>
int main(void)
{
    int k = 0, h = 0, n = 0,
        ek = 0, eh = 0, Max = 0;
    scanf("%d %d", &k, &h);
    Max = k >= h ? k : h;
    for (n = 1; Max >= n; n++)
    {
        if (k == n)
        {
            if (n % 2 == 1)
            {
                ek = (n + 1) / 2;
            }
            else if (n % 2 == 0)
            {
                ek = k * 5;
            }
        }
        else if (h == n)
        {
            if (n % 2 == 1)
            {
                eh = (n + 1) / 2;
            }
            else if (n % 2 == 0)
            {
                eh = h * 5;
            }
        }
    }
    printf("%d", ek + eh);

}
