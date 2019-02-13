#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
//	gets(a);
	while(fgets(a, 100, stdin))
	{
	for(i = 0; a[i] != '\0'; i++)
	{
		if ( a[i] == ' '&& a[i+1] != ' ' )
		{
			if (a[i+1] >= 'a' && a[i+1] <= 'z')
				a[i+1] = a[i+1] - 32;

		}
	}
	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 32;
	fputs(a, stdout);	
}

	return 0;
}
