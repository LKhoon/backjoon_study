#include <stdio.h>

int	main(void)
{
	int	n;
	int	r = 0;
	scanf("%d", &n);
	while (n - 1 > 3 * r * (r + 1))
		++r;
	printf("%d",r + 1);
	return (0);
}
