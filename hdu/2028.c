#include <stdio.h>
int main()
{
	int n,i;
	long a[100], sum, max,j,k;
	while (scanf("%d", &n) != EOF)
	{
		max = 0;
		for (i = 0; i < n; i ++)
		{
			scanf("%ld", &a[i]);
			if (a[i] > max)
				max = a[i];
		}
		
		for (j = max; j >0; j++)
		{
			k = 0;		
			for (i = 0; i < n; i++)
			{	
				if( j%a[i] == 0 && j%max == 0 )	
					k++;	
			}
			if (k == n)
			{
				printf("%ld\n", j);
				break;
			}

		}
	}
	return 0;
}
