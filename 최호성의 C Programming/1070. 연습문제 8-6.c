#include <stdio.h>
int main(void)
{
	char a = 0, cPrev = 0;
	int i = 0;
	
	while ((a = getchar()) != '\n') 
	{
		if ((a == ' ') || (a == '\t')) 
		{
			if (cPrev != ' ' && cPrev != '\t')
			{
				i++;
			}
		}
		cPrev = a;
	}
	printf("%d\n", ++i);
}