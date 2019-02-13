#include <stdio.h>
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year, month, day;
	int total;
	while (~scanf ("%d/%d/%d", &year,&month,&day))
	{
		total = 0;
		if ( (year%4 == 0 && year%100 != 0) || year%400 == 0)
			a[1] = 29;
		else
			a[1] = 28;
		for (int i = 1; i < month; i ++)
		{
			total=a[i] + total;
		}
		
		printf("%d\n", total+day);
	}
	return 0;	
}
