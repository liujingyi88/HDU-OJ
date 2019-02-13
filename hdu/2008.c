#include <stdio.h>
int main()
{
	int n, i, negative, zero, positive;
	float a;
	while (scanf("%d", &n) != EOF)
	{
		negative = 0, zero = 0, positive = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%f", &a);
			if (a < 0)
				negative += 1;
			else if (a == 0)
				zero += 1;
			     else 
				positive += 1;			
		}	
		if (n != 0)
			printf ("%d %d %d\n", negative, zero, positive);
	}
	return 0;
}
