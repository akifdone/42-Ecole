/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:39:46 by mdone             #+#    #+#             */
/*   Updated: 2023/02/05 15:30:15 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	a;
	int	b;

	x--;
	y--;
	b = 0;
	while (b <= y)
	{
		a = 0;
		while (a <= x)
		{
			if ((a == 0 && b == 0) || (a == 0 && b == y))
				ft_putchar('A');
			else if ((a == x && b == 0) || (a == 0 && b == y))
				ft_putchar('C');
			else if ((a == 0) || (a == x) || (b == 0) || (b == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
