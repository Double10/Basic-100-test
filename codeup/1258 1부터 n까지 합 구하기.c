#include <stdio.h>
int main(void)
{
    int i = 0, Sum = 0;
    scanf("%d", &i);
    for (Sum = 0; i >= 1; --i)
    {
        Sum = Sum + i;
    }
    printf("%d", Sum);
    
}
