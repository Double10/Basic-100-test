#include <stdio.h>

int main(void)
{
    int i = 0, inv = 0, day = 0, per = 0;
    float Sum = 0;
    scanf("%d", &inv);
    scanf("%d", &day);
    Sum = inv;
    for (i = 0; i < day; i++)
    {
        scanf("%d", &per);
        Sum = Sum + Sum * per * 0.01;
    }
    printf("%.0f\n", Sum - inv);
    if (inv > Sum)
    {
        printf("bad");
    }
    else if (inv < Sum)
    {
        printf("good");
    }
    else
    {
        printf("same");
    }
    
}
