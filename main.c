/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:52:15 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/30 14:34:55 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"push_swap.h"

int	is_sorter(t_stcklist *stack)
{
	while(stack->next)
	{
		if((stack->num) > (stack->next)->num)
			return(0);
		stack = stack->next;
	}
	return(1);
}
void ft_sorter(t_push_swap	**pshswp)
{
	printstacks(*pshswp);
}
int	main (int	argc, char	**argv)
{
	t_push_swap	*pshswp;

	if (ft_checkerr(argc, argv))
		{
		write(2, "Error\n", 6);
		return (0);
		}
	if (argc <= 2)
		return( 0);
	pshswp = init(&argc, argv);
	if (!pshswp)
		{
		ft_free(&pshswp);
		write(2, "Error\n", 6);
		return( 0);
		}
 //	printstacks(pshswp);
	ft_index(&pshswp);
//	printstacks(pshswp);
	sorter(&pshswp);
//	printstacks(pshswp);
//	if(is_sorter(pshswp->stacka))
//		write(1,"Ordenado\n",9);
//	printstacks(pshswp);
	ft_free(&pshswp);
	return (0);
	}



