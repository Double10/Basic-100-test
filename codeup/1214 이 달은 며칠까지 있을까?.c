#include <stdio.h>

int main(void)
{
    int year = 0, month = 0;
    scanf("%d %d", &year, &month);
    
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        if (month == 2)
        {
            printf("%d", 29);
        }
        else if (month <= 7 && month % 2 == 1)
        {
            printf("%d", 31);
        }
        else if (month <= 7 && month % 2 == 0)
        {
            printf("%d", 30);
        }
        else if (month > 7 && month % 2 == 0)
        {
            printf("%d", 31);
        }
        else if (month > 7 && month % 2 == 1)
        {
            printf("%d", 30);
        }
    }
    else
    {
        if (month == 2)
        {
            printf("%d", 28);
        }
        else if (month <= 7 && month % 2 == 1)
        {
            printf("%d", 31);
        }
        else if (month <= 7 && month % 2 == 0)
        {
            printf("%d", 30);
        }
        else if (month > 7 && month % 2 == 0)
        {
            printf("%d", 31);
        }
        else if (month > 7 && month % 2 == 1)
        {
            printf("%d", 30);
        }
    }
}
