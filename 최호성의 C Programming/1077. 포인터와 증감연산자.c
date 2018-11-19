#include <stdio.h>

int main(void)
{
    char *pszData = "Test string";
    
    printf("%s\n", ++pszData);
    printf("%c\n", *pszData++);
    printf("%c\n", *--pszData);
    printf("%c\n", (*pszData) + 1);
}
