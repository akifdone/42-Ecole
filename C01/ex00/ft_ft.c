
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	*nbr,number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}