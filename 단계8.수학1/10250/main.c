#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	t = 0;
	int	h = 0;
	int	w = 0;
	int	n = 0;
	int floor;
	int ho;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d %d %d", &h, &w, &n);
		ho = (n - 1) / h + 1;
		floor = (n % h) ? n % h : h;
		if (ho < 10)
			floor *= 10;
		printf("%d%d\n",floor,ho);
	}
	return (0);
}
