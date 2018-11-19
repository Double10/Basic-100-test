#include <stdio.h>

int main(void)
{
    int nInput = 0, No = 0, i = 0, j = 0;
    int Numbering[24] = {0};
    scanf("%d", &nInput);
    for (i = 0; i < nInput; i++)
    {
        scanf("%d", &No);
        Numbering[No] = Numbering[No] + 1;
    }
    
    for (j = 1; j < 24; j++)
    {
        printf("%d ", Numbering[j]);
    }

}




