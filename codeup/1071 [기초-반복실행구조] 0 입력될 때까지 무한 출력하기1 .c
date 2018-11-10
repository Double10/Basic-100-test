#include <stdio.h>
int main(void)
{
    int a = 0;
reload:
    scanf("%d", &a);
    if (a != 0)
    {
        printf("%d\n", a);
        goto reload;
    }
    else
    {
        printf("%d\n", 0);
        goto END;
    }
END: return 0;
}
