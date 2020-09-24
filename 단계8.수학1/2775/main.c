#include <stdio.h>

int	main(void)
{
	int	apt[15][15];
	int	i;
	int t = 0;
	int k;
	int n;
	for (i = 0; i < 15; ++i)
		apt[0][i] = i;
	for (i = 1; i < 15; ++i)
		apt[i][1] = 1;
	for (i = 1; i < 15; ++i)
		for (int j = 2; j < 15; ++j)
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
	scanf("%d",&t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d\n%d",&k,&n);
		printf("%d\n",apt[k][n]);
	}
	return (0);
}
