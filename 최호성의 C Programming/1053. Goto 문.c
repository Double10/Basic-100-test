#include <stdio.h>
void main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);
    
    if (nInput > 10)
    {
        goto END;
    }
    printf("Number: %d\n", nInput);

END:
    puts("End");
}
