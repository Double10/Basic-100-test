#include <stdio.h>
int main(void)
{
    int income1 = 0, income2 = 0, adv = 0;
    scanf("%d %d %d", &income1, &income2, &adv);
    income2 = income2 - adv;
    if (income2 > income1)
    {
        printf("advertise");
    }
    else if (income2 < income1)
    {
        printf("do not advertise");
    }
    else
    {
        printf("does not matter");
    }
}
