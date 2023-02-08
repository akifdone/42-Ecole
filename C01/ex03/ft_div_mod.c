#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{

	int x, y, *div, *mod;
  
	ft_div_mod(10, 5, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}