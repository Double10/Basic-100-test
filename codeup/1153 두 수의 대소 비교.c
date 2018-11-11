#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d %d", &i, &j);
    if (i > j) {
        printf(">");
    }
    else if (i < j)
    {
        printf("<");
    }
    else
    {
        printf("=");
    }
}
