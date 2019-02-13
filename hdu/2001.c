#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,x,y;
	while (scanf("%lf %lf %lf %lf", &a, &b, &x, &y) != EOF)
	{
		printf("%.2lf\n", sqrt(pow(fabs(a-x),2)+pow(fabs(b-y),2)));
	}
	return 0;
}
