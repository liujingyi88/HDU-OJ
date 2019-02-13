#include <stdio.h>
int main()
{
	int n,i,j;
	int a[30][30]={0};
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <=i ; j++) 	
			{
				if (j == 0)
					a[i][j] = 1;
				if (j > 0)
					a[i][j] = a[i-1][j-1] + a[i-1][j];
				if (j > 0)	
					printf(" %d", a[i][j]);
				else
					printf("%d", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
