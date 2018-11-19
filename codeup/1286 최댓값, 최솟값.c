#include <stdio.h>

int main(void)
{
    int No = 0, i = 0, Max = 0, Min = 0;
    
    scanf("%d", &No);
    Max = Min = No;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &No);
        Max = Max > No ? Max : No;
        Min = Min < No ? Min : No;
    }
    printf("%d\n%d", Max, Min);
}
