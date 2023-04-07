/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:32:51 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/24 22:53:22 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cou;
	size_t	cou2;

	cou = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[cou] != '\0' && cou < len)
	{
		cou2 = 0;
		if (haystack[cou] == needle[cou2])
		{
			while ((needle[cou2] == haystack[cou + cou2]) && (cou + cou2 - len))
			{
				if (needle[cou2 + 1] == '\0')
					return (&((char *)haystack)[cou]);
				cou2++;
			}
		}
		cou++;
	}
	return (NULL);
}
