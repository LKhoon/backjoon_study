#include <stdio.h>

int	main(void)
{
	int n;
	int r;
	int a = 0;
	scanf("%d",&n);
	r = 0;
	while(n > r * (r + 1) / 2)
		++r;
	n -= r * (r - 1) / 2;
	if (r & 1)
		printf("%d/%d", r + 1 - n, n);
	else
		printf("%d/%d", n, r + 1 - n);
	return (0);
}
