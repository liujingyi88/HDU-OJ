#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,i;
	float sum, sq;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		sq = (float) n;
		sum = sq;
		for (i = 0; i < m - 1; i++)
		{
			sq = sqrt(sq);	
			sum += sq;
		}
		printf("%.2f\n", sum);
	}
	return 0;
}
