#include <stdio.h>
#include <string.h>

void main(void)
{
    char *pszData = "Hello, World!";
    
    if (pszData != NULL && strlen(pszData) > 3)
    {
        printf("%s\n", pszData);
    }
}

// Hello, World!
