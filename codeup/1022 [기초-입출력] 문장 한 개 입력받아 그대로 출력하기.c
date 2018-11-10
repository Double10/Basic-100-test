#include <stdio.h>
int main(void)
{
    char article[2001];
    fgets(article, 2000, stdin);
    printf("%s", article);
    return 0;
}
