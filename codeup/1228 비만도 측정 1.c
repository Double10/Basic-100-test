#include <stdio.h>
int main(void)
{
    double h = 0, w = 0, o = 0, s = 0;
    scanf("%lf %lf", &h, &w);
    s = (h - 100) * 0.9;
    o = (w - s) * 100 / s;
    if (o < 10)
    {
        printf("정상");
    }
    else if (10 <= o && o < 20)
    {
        printf("과체중");
    }
    else if (o >= 20)
    {
        printf("비만");
    }
}
