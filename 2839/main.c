#include <stdio.h>

int	main(void)
{
	int n = 0;
	int	a = 0;
	int b = 0;
	int temp;
	int bong = 0;
	scanf("%d", &n);
	if (n == 1 || n == 2 || n == 4 || n == 7)
	{
		printf("-1");
		return (0);
	}
	temp = n;
	a = temp / 5;
	temp %= 5;
	b = temp / 3;
	temp %= 3;
	if (temp == 0)
	{
		bong = a + b;
	}
	else
	{
		while ( a >= 1)
		{
			temp = n;
			a -= 1;
			temp -= 5 * a;
			b = temp / 3;
			temp %= 3;
			if (temp == 0)
			{
				bong = a + b;
				break;
			}
			if (a == 0)
				bong = -1;
		}
	}
	printf("%d", bong);
	return (0);
}
