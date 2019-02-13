#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i,j;
	float sum;
	while (scanf("%d", &m) != EOF)
	{
		for (i = 1; i <= m; i++)
		{	
			sum = 0;
			scanf ("%d", &n);
			for (j = 1; j <= n; j++) 
				sum += (1.0/j)*pow((-1), j+1);	
			printf ("%.2f\n", sum);
		}
	}
	return 0;
}
