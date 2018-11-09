#include <stdio.h>
void main(void)
{
    int x = 0, y = 0;
    while (y < 5)
    {
        x = 0;
        while (x < 4)
        {
            printf("*\t");
            x++;
        }
        putchar('\n');
        y++;
    }
}

/*
 
#include <stdio.h>

void main(void)
{
    int x = 0, y = 0;
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 4; ++x)
        {
            printf("*\t");
        }
        
        putchar('\n');
    }
}

*/
