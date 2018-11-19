#include <stdio.h>

int main(void)
{
    int times = 0, i = 0, nMin = 0;
    int nData[24] = {0};
    scanf("%d", &times);
    scanf("%d", &nData[0]);
    nMin = nData[0];
    for (i = 1; i < times; i++)
    {
        scanf("%d", &nData[i]);
        nMin = nMin < nData[i] ? nMin : nData[i];
    }
    printf("%d", nMin);
}




