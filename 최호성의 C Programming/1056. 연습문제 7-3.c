# include <stdio.h>

int main(void)
{
    int Data1 = 0, Data2 = 0;
    char charData = 0;
    scanf("%c %d %d", &charData, &Data1, &Data2);
    switch (charData) {
        case 'a':
            printf("%d\n", Data1 + Data2);
            break;
            
        case 'b':
            printf("%d\n", Data1 * Data2);
            break;
            
        case 'c':
            printf("%d\n", Data1 - Data2);
            break;
            
        default:
            puts("알수없는 명령");
            break;
    }
}


