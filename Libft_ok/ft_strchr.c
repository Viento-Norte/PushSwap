/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:58:34 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/23 23:35:24 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_char;
	char	*s_char;
	int		count;

	count = 0;
	c_char = (char)c;
	s_char = (char *)s;
	while (*s_char != c_char)
	{
		if (*s_char == '\0')
			return (NULL);
		s_char++;
	}
	return (s_char);
}
