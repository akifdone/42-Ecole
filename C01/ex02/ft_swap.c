#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int	x = 2, y = 3;

	ft_swap(&x, &y);
	printf("%d\n%d", x, y);
}