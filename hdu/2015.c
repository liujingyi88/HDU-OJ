#include <stdio.h>

int main()
{
	int m,n,i,res,sum,j,l,f;
	while (scanf("%d %d", &n, &m) != EOF )
	{
		sum = 0;
		for(i = 0; i < n/m; i++)
		{	
			f = 2*i*m + 2;
			sum = m*f + m*m -m;
			res = sum/m;
			if (i == 0)
				printf("%d", res);
			else
				printf(" %d", res);	 	
		}
		if (n%m != 0)
		{	
			int sum2 = 0;
			int res2 = 0;
			j = n%m;
			f = 2 * n;
			sum2 = j*f + j*j - j;
			res2 = sum2/j;
			printf(" %d\n", res2);
		}	
		else
			printf("\n");
	}
	return 0;
}
