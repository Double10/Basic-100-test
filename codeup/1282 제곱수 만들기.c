#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 0, k = 0, t = 0;
    scanf("%d", &n);
    t = sqrt(n);
    k = n - pow(t, 2);
    printf("%d %d", k, t);
}
