/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 05:17:30 by mdone             #+#    #+#             */
/*   Updated: 2023/02/12 05:17:31 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	count;

	index = 0;
	while (str[index] != '\0')
	{
		count = 0;
		if (to_find[count] == str[index])
		{
			while (str[count + index] == to_find[count])
			{
				++count;
				if (to_find[count] == '\0')
					return (&str[index]);
			}
		}
		++index;
	}
	return (0);
}
