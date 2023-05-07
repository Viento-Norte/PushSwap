/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:58:45 by legarcia          #+#    #+#             */
/*   Updated: 2023/05/07 20:58:17 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

long    ft_find(t_stcklist *stack, long posindex)
{
    long    pos;

	pos = 0;
	while (stack && stack->index != posindex)
	{
		stack = stack->next;
		pos++;
	}
	return(pos);
}

void    ft_goto_b(t_push_swap **pshswp, long pos)
{
	if (pos == 0)
        return ;
	while ((*pshswp)->stackb && (*pshswp)->stackb->next &&  (*pshswp)->stackb->index != pos )
	{
		if(ft_find((*pshswp)->stackb, pos) < (*pshswp)->elmntsb/2)
			rb(pshswp);
		else 
			rrb(pshswp);
	}
}

void    ft_big_sorter(t_push_swap **pshswp)
{
	long    c;
	long    med;
	int     flag;

	c = 1;
	flag = 0;
	med = 10;
	while ((*pshswp)->elmntsa > 0)
	{
		if ((*pshswp)->stacka->index <= med)
		{
			pb(pshswp);
			flag = 1;
			c++;
		}
		else if ((*pshswp)->stacka->index < med + 10)
		{
			c++;
			pb(pshswp);
			flag = 2;
		}
		if (flag == 1 && (*pshswp)->elmntsa > 1
        && (*pshswp)->stacka->index >= med + 10)
			rr(pshswp);
		else if (flag == 1)
			rb(pshswp);
		else if (flag == 0)
			ra(pshswp);
		flag = 0;
		med = (((c / 20) + 1)* 20) - 10;
	}
	c = (*pshswp)->maxindex;
	while ((*pshswp)->elmntsb >= 0 && c)
	{
		ft_goto_b(pshswp, c--);
		pa(pshswp);
	}
}
void    ft_giant_sorter(t_push_swap **pshswp)
{
	long    c;
	long    med;
	int     flag;

	c = 1;
	flag = 0;
	med = 31;

	while ((*pshswp)->elmntsa > 0 )
	{
		if ((*pshswp)->stacka->index <= med)
		{
			pb(pshswp);
			flag = 1;
			c++;
		}
		else if ((*pshswp)->stacka->index < med + 31)
		{
			c++;
			pb(pshswp);
			flag = 2;
		}
		if (flag == 1 && (*pshswp)->elmntsa > 1
        && (*pshswp)->stacka->index >= med + 31)
			rr(pshswp);
		else if (flag == 1)
			rb(pshswp);
		else if (flag == 0 )
            ra(pshswp);
		flag = 0;
		med = (((c / 62) + 1)* 62) - 31;
	}
	c = (*pshswp)->maxindex;
	while ((*pshswp)->elmntsb >= 0 && c)
	{
		ft_goto_b(pshswp, c--);
		pa(pshswp);
	}
}