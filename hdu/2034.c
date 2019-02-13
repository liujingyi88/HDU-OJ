#include <stdio.h>
int main()
{
	int n,m,i,j,k,l,temp;
	int a[100], b[100], c[100];
	while(scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0))
	{
		
		l = 0;
		for (i = 0; i < n; i ++)
			scanf("%d", &a[i]);
		for (j = 0; j < m; j++)
			scanf("%d", &b[j]);	
		for (i = 0; i < n; i++)
		{
			k = 0;
			for (j = 0; j < m; j++)
			{	
				if (a[i] == b[j])
					k ++;		

			}
			if (k == 0)
			{
				c[l] = a[i];
				l++;
			}
		}
		if (l == 0)
			printf("NULL");
		else
		{
			for (i = 0; i < l; i++)
			{
				for (j = 0; j < l - i; j++)
				{			
					if(c[j] > c[j+1])
					{
						temp = c[j];
						c[j] = c[j+1];
						c[j+1] = temp;		
					}
				}
	
			}
			for (i = 0; i < l; i++)
				printf("%d ", c[i]);

		}
		printf("\n");

	}
	return 0;	

}
