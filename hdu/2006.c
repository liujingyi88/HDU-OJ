#include <stdio.h>

int main()
{
	int n, i, r, m;
	
	while (scanf("%d", &n) != EOF)
	{
		m = 1;
		for (i = 0 ; i < n ; i++)
		{
			scanf("%d", &r);
			if (r%2 != 0)
				m *= r;
		}
		printf("%d\n", m);

	}	
	return 0;
}
