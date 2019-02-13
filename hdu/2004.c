#include <stdio.h>
int main()
{
	int i;
	while (scanf("%d", &i) != EOF)
		if (i>=90&&i<=100)
			printf("A\n");
		else if (i>=80&&i<=89)
			printf("B\n");
		else if (i>=70&&i<=79)
			printf("C\n");
		else if (i>=60&&i<=69)
			printf("D\n");
		else if (i>=0&&i<=59)
			printf("E\n");
		else 
			printf("Score is error!\n");
	return 0;
}
