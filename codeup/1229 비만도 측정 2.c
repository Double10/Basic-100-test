#include <stdio.h>
int main(void)
{
    double h = 0, w = 0, sw = 0, o = 0;
    scanf("%lf %lf", &h, &w);
    if (h < 150)
    {
        sw = h - 100;
    }
    else if (150 <= h && h < 160)
    {
        sw = (h - 150) / 2 + 50;
    }
    else if (160 <= h)
    {
        sw = (h - 100) * 0.9;
    }
    
    o = (w - sw) * 100 / sw;
    
    if (o < 10)
    {
        printf("정상");
    }
    else if (10 <= o && o <= 20)
    {
        printf("과체중");
    }
    else if (o > 20)
    {
        printf("비만");
    }
}

