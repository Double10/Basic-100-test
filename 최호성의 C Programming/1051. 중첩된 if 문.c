#include <stdio.h>

void main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);
    
    if (nInput >= 10)
    {
        if (nInput > 20)
        {
            puts("20초과");
        }
        else
            puts("20이하");
    }
    else
    {
        printf("10미만");
        
        if (nInput >= 5)
        {
            puts("5이상");
        }
        else
            puts("5미만");
    }
}
