/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:32:26 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/27 05:39:19 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{	
	int	count;

	count = 0;
	while (s[count] != ('\0'))
	{
		write(fd, &s[count], 1);
		count++;
	}
}
