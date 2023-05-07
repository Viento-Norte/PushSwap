/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:46:12 by legarcia          #+#    #+#             */
/*   Updated: 2023/05/07 18:44:43 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

long int static nextmin(t_stcklist *stack)
{
	t_stcklist	*point;
	long int	tmp;

	point = stack;
	tmp = 0;
	while (point)
	{
		if (point->index == -1)
		tmp = point->num;
		if (point)
		point = point->next;
	}
	point = NULL;
	while (stack)
	{
		if (tmp > stack->num && stack->index == -1)
			tmp = stack->num;
		stack = stack->next;
	}
	return (tmp);
}

void	ft_index(t_push_swap	**pshswp)
{
	int						c;
	t_stcklist		*tmp;
	long int			min;

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
			break ;
			}
		tmp = tmp->next;
		}
		tmp = (*pshswp)->stacka;
		min = nextmin((*pshswp)->stacka);
		(*pshswp)->maxindex = (*pshswp)->elmntsa;
	}	
}
