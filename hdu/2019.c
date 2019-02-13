#include <stdio.h>

int main()
{
	int n,m,i,j;
	int a[101] = {0};
	while (scanf("%d %d", &n, &m)!= EOF && n &&m )
	{
//		flag = 0;
		for (i = 0; i < n; i++ )
		{
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] > m)
			{
				for (j=n; j > i; j--)
				{
					a[j] = a[j-1];
				}
				a[i] = m;
				break;
			}			
		}
		for (i = 0; i <= n; i++)
		{
//			if (flag > 0)
//				printf(" ");
//			printf("%d", a[i]);
//			flag++;
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);

		}

		printf("\n");
	}
	return 0;
}
