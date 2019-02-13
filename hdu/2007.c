#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, a, b, c, i, sum2, sum3;
	while (scanf("%d%d", &a, &b) != EOF)
	{	
		c = 0;
		if ( a > b)
		{
			c = a;
			a = b;
			b = c;
		}
		
		i = 0, sum2 = 0, sum3 = 0;
		for ( i = a; i <= b; i++)
		{
			if (i%2==0)
			{
				x = pow(i,2);
				sum2 += x;
			}
			else
			{
				y = pow(i,3);
				sum3 += y;
			}
		}
		printf("%d %d\n", sum2, sum3); 

	}
	return 0;
}
