#include <stdio.h>
#include <math.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
    if (i == j && j == k)
    {
        printf("정삼각형");
    }
    else if ((i == j ^ j == k) && (i + j > k))
    {
        printf("이등변삼각형");
    }
    else if (pow(i,2) + pow(j,2) == pow(k,2))
    {
        printf("직각삼각형");
    }
    else if (i + j <= k)
    {
        printf("삼각형아님");
    }
    else
    {
        printf("삼각형");
    }
}
