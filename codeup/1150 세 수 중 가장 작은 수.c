#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 0, nMin = 0;
    scanf("%d %d %d", &i, &j, &k);
    nMin = i < j ? i : j;
    nMin = nMin < k ? nMin : k;
    printf("%d", nMin);
    
}
