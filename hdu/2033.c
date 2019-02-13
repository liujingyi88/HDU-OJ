#include <stdio.h>
int main()
{
	int N, AH, AM, AS, BH, BM, BS, i,h,m,s;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		h = 0;
		m = 0; 
		s = 0;
		scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS);
		if (AS+BS >= 60)
		{
			s = AS + BS - 60;
			m += 1;
		}
		else
			s = AS + BS;
		if (AM + BM + m>= 60)
		{
			m = AM + BM + m - 60;
			h += 1;
		}
		else
			m = AM + BM + m;
		h = AH + BH + h;

		printf("%d %d %d\n", h, m, s);
	}

	return 0;
}
