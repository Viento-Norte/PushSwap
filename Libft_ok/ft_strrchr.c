/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:24:42 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/24 19:25:05 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	char	*s_char;
	int		len_s;

	len_s = ft_strlen(s);
	c_char = (char)c;
	s_char = (char *)s;
	while (s_char[len_s] != c_char)
	{
		if (len_s == 0)
			return (NULL);
		len_s--;
	}
	return (&s_char[len_s]);
}
