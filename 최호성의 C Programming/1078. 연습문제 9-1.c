#include <stdio.h>
#include <string.h>

int main(void)
{
    char szName1[32] = {0}, szName2[32] = {0};
    printf("Input name: ");
    fgets(szName1, 32, stdin);
    printf("Input name: ");
    fgets(szName2, 32, stdin);
    
    if (szName1[0] != 0 && memcmp(szName1, szName2, 2) == 0)
    {
        puts("같음");
    }
    else {
        puts("다름");
    }
}
