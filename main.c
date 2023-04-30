/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:52:15 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/30 13:08:05 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"push_swap.h"
long int static nextmin(t_stcklist *stack)
{
	t_stcklist	*point;
	long int	tmp;
	point = stack;
	tmp = 0;
	while (point)
	{
		if(point->index == -1)
		tmp = point->num;
		if(point)
		point = point->next;
	}
	point = NULL;
	while(stack)
	{
		if (tmp > stack->num && stack->index == -1)
			tmp = stack->num;
		stack = stack->next;
	}
	return(tmp);
}
void	ft_index(t_push_swap	**pshswp)
{
int c;
t_stcklist *tmp;
long int	min;

tmp = (*pshswp)->stacka;
min = ft_minnum(tmp);
c = 1;
while (c <= (*pshswp)->elmntsa)
{
while (tmp)
{
	if (min == tmp->num && tmp->index == -1)
		{
		tmp->index = c++;
		break;
		}
	tmp = tmp->next;
}
tmp = (*pshswp)->stacka;
min = nextmin((*pshswp)->stacka);
}	
}

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
 	ft_index(&pshswp);
	sorter(&pshswp);
	printstacks(pshswp);

	if(is_sorter(pshswp->stacka))
		write(1,"Ordenado\n",9);
	ft_free(&pshswp);
	return (0);
	}



