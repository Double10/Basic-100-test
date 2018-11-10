#include <stdio.h>
int main(void)
{
    int i = 0, Sum = 0, k = 0;
    scanf("%d", &i);
    for (k = i; k >= 0; --k)
    {
        if (i % 2 == 0)
        {
            Sum = Sum + i;
        }
        --i;
        continue;
    }
    printf("%d", Sum);
    
}
