#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 0, j = 0, nMax = 0;
    scanf("%d %d", &i, &j);
    nMax = i + j;
    nMax = nMax > i - j ? nMax : i - j;
    nMax = nMax > i * j ? nMax : i * j;
    nMax = nMax > i / j ? nMax : i / j;
    nMax = nMax > pow(j, i) ? nMax : pow(j, i);
    printf("%f", (float)nMax);

}

