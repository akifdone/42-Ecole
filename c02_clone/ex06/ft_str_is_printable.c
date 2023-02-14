/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:39:57 by mdone             #+#    #+#             */
/*   Updated: 2023/02/11 18:39:58 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 33 && str[count] < 127)
		{
			++count;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
