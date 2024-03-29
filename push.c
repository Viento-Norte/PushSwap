/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:40:55 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/29 17:43:59 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void static	push(t_stcklist	**stckorg, t_stcklist	**stckdst, char *str)
{
	t_stcklist	*swap;

	if (!(*stckorg))
		return ;
	swap = (*stckorg)->next;
	(*stckorg)->next = NULL;
	ft_stcklstadd_front(stckdst, (*stckorg));
	*stckorg = swap;
	write (1, str, 3);
}

void	pb(t_push_swap	**pshswp)
{
	if ((*pshswp)->elmntsb >= 0 && (*pshswp)->elmntsa > 0)
	{
		push(&((*pshswp)->stacka), &((*pshswp)->stackb), "pb\n");
		(*pshswp)->elmntsb += 1;
		(*pshswp)->elmntsa -= 1;
	}
}

void	pa(t_push_swap	**pshswp)
{
	if ((*pshswp)->elmntsa >= 0 && (*pshswp)->elmntsb > 0)
	{
		push(&((*pshswp)->stackb), &((*pshswp)->stacka), "pa\n");
		(*pshswp)->elmntsa += 1;
		(*pshswp)->elmntsb -= 1;
	}
}
