#include <stdio.h>
int main()
{
	int R,i,N,j;
	char c[17] = {"0123456789ABCDEF"};
	int a[200];
	while(scanf("%d%d", &N, &R) != EOF)
	{
		i = 0;	
		if (N < 0)
		{
			printf("-");
			N = -N;
		}
		while (N)
		{
			a[i++] = N % R;
		 	N /= R;
		}
		for (j = i - 1; j>=0; j-- )
		{
			printf("%c", c[a[j]]);
			

		}
		printf("\n");
		

	}
	return 0;
}
