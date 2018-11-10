#include <stdio.h>
int main(void)
{
    int i = 0;
    
reload:
    scanf("%d", &i);
    if (i != 0)
    {
        printf("%d\n", i);
        goto reload;
    }
    else if (i == 0)
    {
        printf("%d\n", i);
    }
}
