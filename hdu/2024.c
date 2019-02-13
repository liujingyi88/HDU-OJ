#include <stdio.h>
#define STLEN 50
int main()
{
	int n,i,j,l;
	char a[STLEN];
	while (~scanf("%d", &n) && n && getchar())
	{
		for (i = 0; i < n; i++)
		{
			fgets(a, 50, stdin);
			l = 0;
			
			if (a[0] == '_' || (a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z'))
			{
				for (j = 1; a[j] != '\n'; j++)
				{	
					if (a[j] == '_' || (a[j] >= 'a' && a[j] <= 'z') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= '0' && a[j] <= '9'))
						l = 1;
					else
					{
						l = 0;
						break;
					}
				}
			
			if (l == 1)
                                        printf("yes\n");
                        else 
                                        printf("no\n");
			}
			else
			printf("no\n");
		}	


	}
	getchar();
	return 0;
}
