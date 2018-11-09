#include <stdio.h>
int main(void)
{
    int nData1 = 1234, nData2 = -4567;
    
    printf("%d\n", nData1);
    printf("%+d, %+d\n", nData1, nData2);
    
    printf("%07d\n", nData1);
    printf("%7d\n", nData1);
    printf("%-7d\n", nData1);
    return 0;
}
