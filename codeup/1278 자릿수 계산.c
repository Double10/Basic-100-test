#include <stdio.h>

int main(void)
{
    long long int n = 0, i = 0, j = 1;
    scanf("%lld", &i);
    for (j = 1; j <= i; j = j*10)
    {
        if (i >= j) {
            n++;
        }
    }
    printf("%lld", n);
}
