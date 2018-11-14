#include <stdio.h>
int main (main)
{
    int time = 0, score1 = 0, score2 = 0;
    scanf("%d %d %d", &time, &score1, &score2);
    while (time < 90)
    {
        time = time + 5;
        score1++;
    }
    if (score1 < score2)
    {
        printf("lose");
    }
    else if (score1 > score2)
    {
        printf("win");
    }
    else
    {
        printf("same");
    }
}
