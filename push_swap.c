/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:42:46 by legarcia          #+#    #+#             */
/*   Updated: 2023/03/17 19:25:50 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main (int	argc, char	**argv)
{
	if (argc < 1)
		return (0);

ft_putnbr_fd(argc, 1);

		if (ft_checkerr(argc, argv))
		return(write(1, "Error\n", 6));

}
