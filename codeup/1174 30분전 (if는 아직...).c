#include <stdio.h>
int main(void)
{
    int hInput = 0, mInput = 0, t = 0,
        h1 = 0, h2 = 0, m1 = 0, m2 = 0;
    scanf("%d %d", &hInput, &mInput);
    while(hInput == 0 && mInput < 30)
    {
        t = hInput * 60 + mInput - 30 + 24 * 60;
        h1 = t / 60;
        m1 = t % 60;
        printf("%d %d", h1, m1);
        break;
    }
    
    while (hInput == 0 && mInput >= 30)
    {
        t = hInput * 60 + mInput - 30 + 24 * 60;
        h1 = t / 60;
        m1 = t % 60;
        printf("%d %d", h1 - 24, m1);
        break;
    }
    
    while (0 != hInput)
    {
        t = hInput * 60 + mInput - 30;
        h2 = t / 60;
        m2 = t % 60;
        printf("%d %d", h2, m2);
        break;
    }
}
