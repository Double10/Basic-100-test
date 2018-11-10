#include <stdio.h>
int main(void)
{
    char a = 0;
    int i = 0;
    
    scanf("%s", &a);
    for (i = 0; (a = getchar()) != '/'; ++i)
    {
        if (a == 't')
        {
            continue;
        }
    }
    printf("%d\n", i);
}
