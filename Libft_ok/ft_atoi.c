/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 04:34:03 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/24 21:48:42 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				count;
	long long int	num;
	long long int	neg;

	neg = 1;
	num = 0;
	count = 0;
	while ((str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		&& (str[count] != '\0'))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			neg = -1;
		count++;
	}
	while (ft_isdigit (str[count]))
	{
		num = (num * 10) + str[count] - '0';
		count++;
	}
	return (num * neg);
}
