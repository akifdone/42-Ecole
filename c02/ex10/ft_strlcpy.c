/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone <mdone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:44:20 by mdone             #+#    #+#             */
/*   Updated: 2023/02/12 00:44:21 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size != 0)
	{
		while (src[count] != '\0' && count < (size - 1))
		{
			dest[count] = src[count];
			++count;
		}
		dest[count] = '\0';
    	++count;
	}
	return (count);
}
