#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, years = 0;
    scanf("%d %d", &i, &j);
    switch (j) {
        case 1:
            years = 2012 - (i / 10000 + 1900) + 1;
            printf("%d", years);
            break;
            
        case 2:
            years = 2012 - (i / 10000 + 1900) + 1;
            printf("%d", years);
            break;
            
        case 3:
            years = 2012 - (i / 10000 + 2000) + 1;
            printf("%d", years);
            break;
            
        case 4:
            years = 2012 - (i / 10000 + 2000) + 1;
            printf("%d", years);
            break;
            
        default:
            break;
    }
}
