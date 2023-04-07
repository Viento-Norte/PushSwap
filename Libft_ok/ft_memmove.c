/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:14:47 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/23 18:37:48 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*d;
	unsigned char	*s;

	d = ((unsigned char *)dst);
	s = ((unsigned char *)src);
	count = 0;
	if (!dst && !src)
		return (0);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (count < len)
		{
			d[count] = s[count];
		count++;
		}
	}
	return (dst);
}
