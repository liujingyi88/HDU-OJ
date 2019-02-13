#include <stdio.h>
#include <math.h>
int main()
{
	int A,B,c,i;	
	while(scanf("%d%d", &A,&B)!=EOF &&(A != 0 || B != 0))
	{
		c = A;
		for (i = 1; i < B; i++)
			c = (c*A)%1000;	
		printf("%d\n", c%1000);



	}

	return 0;
}
