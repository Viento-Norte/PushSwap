/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:15:11 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/24 19:27:43 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	coun;

	coun = 0;
	while ((s1[coun] != '\0' || s2[coun] != '\0') && n > coun)
	{
		if (s1[coun] != s2[coun])
			return (((unsigned char *)s1)[coun] - ((unsigned char *)s2)[coun]);
		coun++;
	}
	return (0);
}
