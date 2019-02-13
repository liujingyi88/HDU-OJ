#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,len,j,k;
	char a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", a);
		len = strlen(a);
		if (len%2 == 0)
		{
			k = 0;
			for (j = 0; j < len/2; j++)
			{
				if (a[j] != a[len - 1 - j])
				{
					printf("no\n");
					k = 1;
					break;
				}
			}
				if (k == 0)
				printf("yes\n");
		}
		else
		{
			k = 0;
			for (j = 0; j < (len-1)/2;j++)
			{
				if (a[j] != a[len - 1 - j ])
				{
					printf("no\n");
					k = 1;
					break;
				}
			}
				if(k == 0)
				printf("yes\n");
		}

	}
	return 0;
}
