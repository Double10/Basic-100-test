#include <stdio.h>

int main(void)
{
    int nInput = 0, i = 0, j = 0;
    int Numbering[24] = {0};
    scanf("%d", &nInput);
    for (i = 0; i < nInput; i++)
    {
        scanf("%d", &Numbering[i]);
    }
    
    for (j = nInput - 1; j >= 0; j--)
    {
        printf("%d ", Numbering[j]);
    }

}


