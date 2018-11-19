#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int nStrlength = 0, nMaxlength = 0;
    char *pszData = NULL;
    
    scanf("%d", &nMaxlength);
    
    pszData = (char *)malloc(nMaxlength);
    fflush(stdin);
    fgets(pszData, 100, stdin);
    
    while (*(pszData + nStrlength) != 0)
    {
        nStrlength++;
    }
    
    for (nStrlength -= 1; nStrlength >= 0; --nStrlength)
    {
        putchar(*(pszData + nStrlength));
    }
    putchar('\n');
    free(pszData);
}
