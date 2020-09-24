//밑변 n(횟수) -> max 이동가능 거리,  n이 짝 수 일 때는 n/2 시그마 두번 / 홀 수 일 떄는  n + 1 / 2 시그마 한번 n /2 시그마 한번 합.
#include <stdio.h>

int main(void)
{
	int		t;
	long	x;
	long	y;
	long	k;

	scanf("%d",&t);
	for(int i = 0; i < t; ++i)
	{
		scanf("%ld %ld", &x, &y);
		k = 0;
		while (k * (k + 1) < (y - x))
			++k;
		if ((y - x) <= k * k)
			k = 2 * k - 1;
		else
			k = 2 * k;
		printf("%ld\n", k);
	}
	return (0);
}
