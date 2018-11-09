#include <stdio.h>
int main(void)
{
    char szBuffer [16] = {0};
    printf("Input your name: \n");
    gets(szBuffer);
    
    printf("Your name is ");
    puts(szBuffer);
    return 0;
}
