/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:38:01 by legarcia          #+#    #+#             */
/*   Updated: 2023/05/04 18:17:50 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void ft_sort_2(t_push_swap **pshswp)
{
	int	tmp;
	tmp =(*pshswp)->stacka->num ; 

	if((((*pshswp)->stacka->next->num) < tmp ))
		sa(pshswp);

}
void ft_sort_3(t_push_swap **pshswp)
{
	if (ft_maxnum((*pshswp)->stacka) == (*pshswp)->stacka->num)
		ra(pshswp);
	while(!is_sorter((*pshswp)->stacka))
	{
	if(ft_maxnum((*pshswp)->stacka) == (*pshswp)->stacka->next->num)
		rra(pshswp);
	else if (ft_maxnum((*pshswp)->stacka) == (*pshswp)->stacka->next->next->num)
		  sa(pshswp);
  }
	if(ft_maxnum((*pshswp)->stacka) != (*pshswp)->stacka->next->next->num)
		rra(pshswp);
}
void ft_sort_4(t_push_swap **pshswp)
{
	if(!is_sorter((*pshswp)->stacka)) 
	{
	  while(ft_minnum((*pshswp)->stacka)!= (*pshswp)->stacka->num )
	  {
		if(ft_minnum((*pshswp)->stacka) == (*pshswp)->stacka->next->num)
			sa(pshswp);
		else
			rra(pshswp);
	}
	  pb(pshswp);
	  ft_sort_3(pshswp);
	  pa(pshswp);
  }
}

void ft_sort_5(t_push_swap **pshswp)
{
	if(!is_sorter((*pshswp)->stacka)) 
	{
	  while((*pshswp)->minnum != (*pshswp)->stacka->num )
	  {
		if((*pshswp)->minnum == (*pshswp)->stacka->next->num)
			sa(pshswp);
		else
			rra(pshswp);
	}
	pb(pshswp);
	ft_sort_4(pshswp);
	pa(pshswp);
	}
}
void sorter(t_push_swap	**pshswp)
{
	if((*pshswp)->elmntsa== 2)
		ft_sort_2(pshswp);
	else if((*pshswp)->elmntsa== 3)
		ft_sort_3(pshswp);
	else if((*pshswp)->elmntsa== 4)
		ft_sort_4(pshswp);
	else if((*pshswp)->elmntsa== 5)
		ft_sort_5(pshswp);
	else if((*pshswp)->elmntsa > 5)
  		ft_big_sorter(pshswp);
}
