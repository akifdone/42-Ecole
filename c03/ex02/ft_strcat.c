/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 02:34:16 by mdone             #+#    #+#             */
/*   Updated: 2023/02/12 02:34:17 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	index;

	count = 0;
	while (dest[count] != '\0')
	{
		++count;
	}
	index = 0;
	while (src[index] != '\0')
	{
		dest[count] = src[index];
		++count;
		++index;
	}
	dest[count] = '\0';
	return (dest);
}
