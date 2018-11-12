#include <stdio.h>

int main(void)
{
    int h = 0, m = 0,
        t = 0;
    scanf("%d %d", &h, &m);
    if (h == 0)
    {
        if (h == 0 && m == 30)
        {
            printf("%d %d", h, 0);
        }
        else
        {
            t = 24 * 60 + m - 30;
            h = t / 60;
            m = t % 60;
            printf("%d %d", h, m);
        }
    }
    else
    {
        t = h * 60 + m - 30;
        h = t / 60;
        m = t % 60;
        printf("%d %d", h, m);
    }
}

