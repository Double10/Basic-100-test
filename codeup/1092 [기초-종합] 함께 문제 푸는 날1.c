#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, Day = 1;
    scanf("%d %d %d", &i, &j, &k);
    while (1)
    {
        if (Day % i == 0 && Day % j == 0 && Day % k == 0)
        {
            printf("%d", Day);
            break;
        }
        ++Day;
    }
}
