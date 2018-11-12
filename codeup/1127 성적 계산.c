#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    float a = 0, b = 0, c = 0, Sum = 0;
    scanf("%f %d", &a, &i);
    scanf("%f %d", &b, &j);
    scanf("%f %d", &c, &k);
    Sum = i * a + j * b + k * c;
    printf("%.1f", Sum);
    
    
}
