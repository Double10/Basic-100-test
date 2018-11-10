#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    scanf("%d", &i);
    for (j = 0; j <= i - 1; j++) {
        scanf("%d", &k);
        printf("%d\n", k);
        continue;
    }
}
