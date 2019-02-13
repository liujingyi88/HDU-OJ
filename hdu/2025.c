#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],max;
	int i;
	while (scanf("%s", a) != EOF)
	{
		max = a[0];
		for (i = 0; i < strlen(a); i++)
		{
			if (a[i] > max)
				max = a[i];
		}
		for (i = 0; i < strlen(a); i++)
		{
			printf("%c", a[i]);
			if(a[i] == max)
				printf("(max)");
		}
		printf("\n");


	}
	return 0;

}
