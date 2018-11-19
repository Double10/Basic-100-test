#include <stdio.h>
#include <string.h>

int main(void)
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    
    if (memcmp(&x, &y, sizeof(int)) == 0)
    {
        puts("Same");
    }
    else
    {
        puts("Different");
    }
}
