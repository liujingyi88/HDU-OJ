#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	int m,n,j,a,e,i,o,u,x;
	scanf("%d", &n);
	getchar();
		for (m = 0; m < n; m++)
		{
			x = 0;
			while (fgets(word, 100, stdin))
			{	
				a = 0;
	                        e = 0;
	                        i = 0;
        	                o = 0;
                	        u = 0;
				for (j = 0; j < strlen(word); j++)
				{
					if (word[j] == 'a')
						a++;					
					if (word[j] == 'e')
						e++;
					if (word[j] == 'i')
						i++;
					if (word[j] == 'o')
						o++;
					if (word[j] == 'u')
						u++;
				}
			
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", a,e,i,o,u);
				x++;
			printf("x = %d, n = %d\n", x,n);
			if (x != n)
				printf("\n");	
			}

		}
	
	return 0;
}
