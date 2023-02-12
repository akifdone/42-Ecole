/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:47:34 by mdone             #+#    #+#             */
/*   Updated: 2023/02/09 11:47:34 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	n;

	count = 0;
	while (count < size / 2)
	{
		n = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = n;
		++count;
	}
}
