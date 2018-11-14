#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0,
        d = 0, e = 0, f = 0,
        bonus = 0, same = 0,
        i = 0, j = 0, k = 0;
    scanf("%d %d %d %d %d %d %d\n", &a, &b, &c, &d, &e, &f, &bonus);
    for (j = 0; j < 6; j++)
    {
        scanf("%d", &i);
        if (i == a || i == b || i == c || i == d || i == e || i == f)
        {
            same++;
        }
        
        else if (i == bonus)
        {
            k = 1;
        }
        
        if (k == 1 && same == 5)
        {
            printf("2");
            break;
        }
        
        if (same == 5 && k == 0 && j == 5)
        {
            printf("3");
            break;
        }
    }
    
    switch (same)
    {
        case 0:
            printf("0");
            break;
        case 1:
            printf("0");
            break;
        case 2:
            printf("0");
            break;
        case 3:
            printf("5");
            break;
        case 4:
            printf("4");
            break;
        case 6:
            printf("1");
            break;
        
    }
}

