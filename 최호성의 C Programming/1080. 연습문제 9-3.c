#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    void *pMemory = NULL;
    int nLength = 0;
    scanf("%d", &nLength);
    
    if (nLength < 10)
    {
        nLength = 10;
    }
    
    if (nLength > 100)
    {
        nLength = 100;
    }
    
    pMemory = malloc(nLength);
    memset(pMemory, 0, nLength);
    
    free(pMemory);
}
