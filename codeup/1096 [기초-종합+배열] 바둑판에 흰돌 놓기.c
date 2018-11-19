#include <stdio.h>

int main(void)
{
    int count = 0, x = 0, y = 0, i = 0, j = 0;
    int nData[19][19] = {0};
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d %d", &x, &y);
        nData[x - 1][y - 1] = 1;
    }
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 19; j++)
        {
            printf("%d ", nData[i][j]);
        }
        printf("\n");
    }
}




