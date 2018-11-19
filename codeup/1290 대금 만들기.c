#include <stdio.h>
#include <math.h>

int main(void)
{
    int length = 0, count = 0, i = 0;
    scanf("%d", &length);
    for (i = 1; i < length; i++)
    {
        if (length % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    
}
