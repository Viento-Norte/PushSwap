/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:05:41 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/23 18:28:30 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;

	count2 = 0;
	count = 0;
	while (src[count2])
		count2++;
	if (dstsize != 0)
	{
		while ((src[count] != '\0') && (count < dstsize - 1))
		{
			dest[count] = ((char *)src)[count];
			count++;
		}
	dest[count] = '\0';
	}
	return (count2);
}
