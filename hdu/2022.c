#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i,j,max,temp,MM,i_max,j_max;
	while (~scanf("%d %d", &m, &n)&& m && n)
	{
		temp = 0;
		i_max = 0;
		j_max = 0;
		for (i=1; i <= m; i++)
		{
			for (j=1; j <= n; j++)
			{	
				scanf("%d", &MM);
				if ( i == 1 && j == 1)
				{
					max = MM;
					i_max = i;
					j_max = j;				

				}
				if (abs(max) < abs(MM))
				{
					max = MM;
					i_max = i;
					j_max = j;		
				}

			}


		}
		printf("%d %d %d\n", i_max, j_max, max);
		getchar();

	}
	return 0;	
}
