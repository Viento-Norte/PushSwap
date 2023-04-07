/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:44:14 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/23 20:46:26 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_s;
	size_t	count;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_s = ft_strlen(s);
	res = 0;
	count = 0;
	if (size > len_dst)
		res = len_s + len_dst;
	else
		res = len_s + size;
	while (s[count] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[count];
		len_dst++;
		count++;
	}
	dst[len_dst] = '\0';
	return (res);
}
