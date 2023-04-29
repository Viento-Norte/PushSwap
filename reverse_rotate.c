/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:44:53 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/29 17:47:24 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void static	rev_rot(t_stcklist	**stck, char *str)
{
	t_stcklist	*first;
	t_stcklist	*last;

	if (!(*stck) || !(*stck)->next)
		return ;
	first = *stck;
	last = ft_stcklstlast(*stck);
	while ((*stck) && (*stck)->next)
	{
		if (!((*stck)->next)->next)
			(*stck)->next = NULL;
		(*stck) = (*stck)->next;
	}
	last->next = first;
	*stck = last;
	if (str)
		write(1, str, 4);
}

void	rrr(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stacka, NULL);
	rev_rot(&(*pshswp)->stackb, NULL);
	write (1, "rrr\n", 4);
}

void	rra(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stacka, "rra\n");
}

void	rrb(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stackb, "rrb\n");
}
