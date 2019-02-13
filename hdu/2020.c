#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j,temp,temp1;
	int a[101] = {0};
	while(~scanf("%d", &n) && n)
	{	
		temp = 0;
		temp1 = 0;
		for (i = 0; i < n; i++)	
		{
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i; j++)
			{
				if (abs(a[j]) < abs(a[j+1]))
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
					
				}
				
			}

		}

		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
