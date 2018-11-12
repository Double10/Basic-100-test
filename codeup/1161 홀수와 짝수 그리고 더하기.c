#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d %d", &i, &j);
    if ((i % 2 == 0) && (j % 2 == 0))
    {
        printf("짝수+짝수=짝수");
    }
    else if ((i % 2 == 1) && (j % 2 == 0))
    {
        printf("홀수+짝수=홀수");
    }
    else if ((i % 2 == 0) && (j % 2 == 1))
    {
        printf("짝수+홀수=홀수");
    }
    else
    {
        printf("홀수+홀수=짝수");
    }
}
