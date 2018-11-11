#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%X", &i);
    for (j = 1; j < 16; ++j)
    {
        printf("%X*%X=%X\n", i, j, i * j);
    }
}
