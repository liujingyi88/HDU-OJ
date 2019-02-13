#include <stdio.h>

int main()
{
	int m,n,count,i,j,k,z;
	double a[50][5], sum, b[50];
	while(~scanf("%d %d", &n, &m)&& m && n)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				scanf ("%lf", &a[i][j]);
			}
		} 	
		for (i = 0; i < n; i++)
		{
			sum = 0;
			for (j = 0; j < m; j++)
				sum += a[i][j];
			if (i == 0)
			printf("%.2lf", (sum/m));
			else
			printf(" %.2lf", (sum/m));			
		}	
		printf("\n");
		
		for (j = 0; j < m; j++)
		{
			sum = 0;
			for (i = 0; i < n; i++)
				sum += a[i][j];
			b[j] = sum/n;	
			if (j == 0)
			printf("%.2lf", b[j]);
			else
			printf(" %.2lf", b[j]);
		}
		printf("\n");
		count = 0;
		for (i = 0; i < n; i++)
		{	
			k = 0;
			for (j = 0; j < m; j++)
			{
				if (a[i][j] >= b[j])
					k++;	
			}
			if ( k == m)
				count ++;
		}
		printf("%d\n\n", count);
	}
	return 0;
}
