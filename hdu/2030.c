#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,len,j;
	char a[1000];
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		fgets(a, 1000, stdin);
		j = 0;
		len = strlen(a);
		for(i = 0; i < len; i++)
		{
			if(a[i] < 0)
			  j++;	

		}
		printf("%d\n", j/2);

	}
	return 0;

}
