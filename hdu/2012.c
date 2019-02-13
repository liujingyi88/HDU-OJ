#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,i,z,res,ju,j, jud;
	while (scanf("%d %d", &x, &y) != EOF)
	{
		if (x > y)
		{
			z = x;
			x = y;
			y = z;

		}
		if (!(x == 0 && y == 0))
		{
			ju = 0;
			for (i=x; i<=y; i++)
			{
				res = pow(i,2) + i + 41;
				for (j = 2; j < res; j++)
				{
						
					if(res%j == 0)
						ju ++;
				}
			}
			if (ju == 0)
                                        printf("OK\n");
                              else
                                        printf("Sorry\n");

		}
		
		

	}
	return 0;
}
