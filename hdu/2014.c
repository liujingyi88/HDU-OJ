#include <stdio.h>
int main()
{
	int n,i,a,sum,max,min;
	float m;
	while (scanf("%d", &n) != EOF)
	{       
		sum = 0;
		for(i = 0; i < n; i++)
		{
			scanf ("%d", &a);
			sum += a;
			if (i == 0)
			{
				min = a;
				max = a;
			}
			if (a > max)
				max = a;
			if (a < min)
				min = a;
		}
		m = (float) (sum - max - min);
		printf("%.2f\n", ((m)/(i-2)));
	}
	return 0;
}
