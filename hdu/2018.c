#include <stdio.h>
int main()
{
	int n, i;
	int a[55];
	while (scanf("%d", &n) != EOF && n != 0)
	{
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;	
		for (i =4 ; i < n; i++)
		{
			a[i] = a[i-1] + a[i-3];
		}
		printf("%d\n", a[n-1]);	


	}
	return 0;

}
