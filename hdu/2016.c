#include <stdio.h>
int main()
{
	int n,i,min,t,temp,j;
	int a[100];
	while (scanf("%d", &n) != EOF && n != 0)
	{
		
		t = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			
			if (i == 0)
				min = a[i];
			if ( a[i] < min )
			{
				t = i;
				min = a[i];
			}
		}
		if (t != 0)
		{
			temp = a[0];
			a[0] = a[t];
			a[t] = temp;
		}
		for (j = 0; j < n; j++)
		{
			if (j == 0)
				printf("%d", a[j]);
			else
				printf(" %d", a[j]);
		
	   	}	
		printf("\n");
	}
	return 0;
}
