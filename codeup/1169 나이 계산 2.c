#include <stdio.h>
int main(void)
{
    int i = 0, year = 0;
    scanf("%d", &i);
    year = 2012 - i + 1;
    if (year < 2000)
    {
        printf("%d 1", year - 1900);
    }
    else
    {
        printf("%d 3", year - 2000);
    }
    
}
