/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:43:34 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/27 06:08:14 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

static void	ft_print_nbr(int nb, int fd)
{
	char	y;

	y = '0' + (nb % 10);
	nb = nb / 10;
	if (nb <= 9 && nb != 0)
	{
		nb = '0' + nb;
		write(fd, &nb, 1);
	}
	else if (nb >= 10)
	{
		ft_print_nbr(nb, fd);
	}
	write(fd, &y, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if ((nb < 0) && (nb != -2147483648))
	{
		write(fd, "-", 1);
		nb = (-1 * nb);
		ft_print_nbr(nb, fd);
	}
	else if (nb > 0)
		ft_print_nbr(nb, fd);
	else if (nb == -2147483648)
	{
		ft_putnbr_fd(-214748364, fd);
		write(fd, "8", 1);
	}
	else if (nb == 0)
		write(fd, "0", 1);
}
