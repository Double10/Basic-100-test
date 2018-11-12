#include <stdio.h>

int main(void)
{
    int a, b, c, d, Sum;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    Sum = a + b + c + d;
    switch (Sum)
    {
        case 0:
            printf("모");
            break;
        case 1:
            printf("도");
            break;
            
        case 2:
            printf("개");
            break;
            
        case 3:
            printf("걸");
            break;
            
        case 4:
            printf("윷");
            break;
        default:
            break;
    }
}


