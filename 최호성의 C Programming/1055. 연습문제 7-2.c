# include <stdio.h>

int main(void)
{
    char a = 0;
    
BEGIN:
    scanf("%c", &a);
    if (a == 'y' || a == 'Y')
        return 0;  // return 함수는 다시 위로 돌아 간다.
    else
    {
        goto BEGIN;
    }
}
