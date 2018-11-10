#include <stdio.h>
int main(void)
{
    float i = 0, j = 0, k = 0;
    scanf("%f %f", &i, &j);
    if (i < j)
    {
        for (k = i * 100; k <= j * 100; ++k)
        {
            printf("%.2f ", i);
            i = i + 0.01;
        }
    }
    else
    {
        for (k = j * 100; k <= i * 100; ++k)
        {
            printf("%.2f ", j);
            j = j + 0.01;
        }
    }
}
