#include <stdio.h>
int main(void)
{
    int nInput = 0, i = 0;
    scanf("%d", &nInput);
    
    for (i = 2; i < nInput; i++)
    {
        if (nInput % i == 0)
        {
            printf("not prime");
            break;
        }
    }
    if (i == nInput)
    {
        printf("prime");
    }
    

}
