#include <stdio.h>
#include <math.h> 
int main()
{
	int m,n,i,d;
	while (scanf("%d%d", &m, &n) != EOF)
	{	
		d = 0;
		for (i = m; i <= n; i++)
		{
			if (i == pow((i/100),3)+pow((i/10-10*(i/100)),3)+pow((i-(10*(i/10))),3))
			{	
				d += 1;	
				if (d == 1)
					printf("%d", i);
				else
					printf(" %d", i);
				
					
			}
		}
		if ( d == 0)
			printf("no\n");
		else
			printf("\n");
	}

	return 0;
}
