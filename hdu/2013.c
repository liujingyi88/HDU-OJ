#include <stdio.h>
int main()
{
	int n,res,i;
	while (scanf("%d", &n) != EOF)
	{
		res = 1;
		for(i = 1; i < n; i++)
		{
			res = (res + 1)*2;		
			
		}
		printf("%d\n", res);
		
	}
	return 0;
}
