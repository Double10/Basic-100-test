#include <stdio.h>
int main(void)
{
    int nInput = 0, Sum = 0, i = 0;
    scanf("%d", &nInput);
    for (i = 1; i <= nInput; ++i)
    {
        Sum = Sum + i;
        if (Sum >= nInput)
        {
            printf("%d\n", Sum);
            break;
        }
    }
}
