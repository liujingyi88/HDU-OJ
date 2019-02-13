#include <stdio.h>
int main()
{
	int n, i, count;
	char c, a;
	while( scanf("%d", &n)!= EOF && getchar() )
	{
		for (i = 0; i < n; i++)
		{	
			count = 0;
			while ( (c = getchar()) != '\n' )
			{
				if (c >= '0' && c <= '9')
					count++;
			}
			printf("%d\n", count);
		}	
		


	}
	return 0;
}
