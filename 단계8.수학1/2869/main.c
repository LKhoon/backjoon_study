#include <stdio.h>

int	main(void)
{
	int	A = 0;
	int B = 0;
	int V = 0;
	int c = 0;
	scanf("%d %d %d", &A, &B, &V);
	V -= A;
	c = V / (A - B);
	c += (V % (A - B)) ? 1 : 0;
	printf("%d", c + 1);
	return (0);
}
