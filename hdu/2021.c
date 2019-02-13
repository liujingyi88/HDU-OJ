#include <stdio.h>
int main()
{
	int n,m,i,sum;
	int a[100];
	while (~scanf("%d", &n) && n)
	{
		sum = 0;
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for(i = 0; i < n; i++)
		{
			sum = sum + a[i]/100 + a[i]%100/50 + a[i]%100%50/10 + a[i]%100%50%10/5 + a[i]%100%50%10%5/2 + a[i]%100%50%10%5%2/1;
		}		
		printf("%d\n", sum);


	}
	return 0;
}
