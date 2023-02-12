/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:09:17 by mdone             #+#    #+#             */
/*   Updated: 2023/02/12 03:09:18 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	while (dest[count] != '\0')
	{
		++count;
	}
	index = 0;
	while (src[index] != '\0' && index < nb)
	{
		dest[count] = src[index];
		++count;
		++index;
	}
	dest[count] = '\0';
	return (dest);
}
