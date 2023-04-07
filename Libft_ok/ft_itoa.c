/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:17:18 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/27 05:25:51 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_inttochr(char *num, int n, int len)
{
	num[len] = '\0';
	len--;
	while (n > 0)
	{
		num[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_isminint(char *num)
{
	ft_inttochr(&num[1], 2147483647, 10);
	num[10] = '8';
	num[0] = '-';
	return (num);
}

static char	*ft_niszero(char *num)
{
	num[0] = '0';
	num[1] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;

	num = (char *)malloc(sizeof (char) * (ft_intlen(n) + 1));
	if (!num)
		return (NULL);
	if (n == 0)
		return (ft_niszero(num));
	if (n == -2147483648)
		return (ft_isminint(num));
	if (n < 0)
	{
		num[0] = '-';
		n = n * -1;
		ft_inttochr(&num[1], n, ft_intlen(n));
	}
	else
		ft_inttochr(num, n, ft_intlen(n));
	return (num);
}
