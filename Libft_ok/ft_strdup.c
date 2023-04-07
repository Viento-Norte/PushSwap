/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:29:28 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/25 18:48:10 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		count;

	count = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) +1));
	if (!str)
		return (NULL);
	while (s1[count])
	{
		str[count] = ((char *)s1)[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
