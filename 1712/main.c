#include <stdio.h>

int	main(void)
{
	int		gojung = 0;
	int		byundong = 0;
	int		price = 0;
	int		gesu = 0;
	int		gap = 0;

	scanf("%d %d %d", &gojung, &byundong, &price);
	if (byundong >= price)
	{
		printf("-1");
		return (0);
	}
	gap = price - byundong;
	gesu = gojung / gap + 1;
	printf("%d", gesu);
	return (0);
}
