/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:37:30 by mdone             #+#    #+#             */
/*   Updated: 2023/02/11 19:37:31 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		++count;
	}
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (!(str[count - 1] >= 'a' && str[count - 1] <= 'z'))
				if (!(str[count - 1] >= 'A' && str[count - 1] <= 'Z'))
					if (!(str[count - 1] >= '0' && str[count - 1] <= '9'))
						str[count] -= 32;
		}
		++count;
	}
	return (str);
}
