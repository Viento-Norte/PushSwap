/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:58:45 by legarcia          #+#    #+#             */
/*   Updated: 2023/05/04 19:08:49 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

long int ft_find(t_stcklist *stack, long posindex)
{
    long pos;
    
    pos = 0;
    while (stack && stack->index != posindex )
        {
            stack = stack->next;
            pos++;
        } 
    return(pos);
}

void ft_goto_a(t_push_swap **pshswp, long pos)
{
   if (pos == 0)
    return;
    while ((*pshswp)->stacka && (*pshswp)->stacka->next &&  (*pshswp)->stacka->index != pos && (*pshswp)->elmntsa > 2)
    {
            if(ft_find((*pshswp)->stacka, pos) < (*pshswp)->maxindex/2 )
            {
                if((*pshswp)->stacka->index > (*pshswp)->stacka->next->index && (*pshswp)->stacka->next->index != pos)
                {
                    sa(pshswp);
                    ra(pshswp);
                }
            else
            ra(pshswp);
            }
            else 
            {
            if((*pshswp)->stacka->index > (*pshswp)->stacka->next->index && (*pshswp)->stacka->next->index != pos)
                {
                    sa(pshswp);
                    rra(pshswp);
                }
            else    
            rra(pshswp);  
            }
    }
}


void ft_big_sorter(t_push_swap **pshswp)
{
    long med;
    long c;
    long find;
        
    c = 1; 
    med = ((*pshswp)->elmntsa);
    find = ft_find(((*pshswp)->stacka), c );
    while((med - c) && !is_sorter((*pshswp)->stacka))
    {
       ft_goto_a(pshswp,c );
       pb(pshswp);
       find = ft_find(((*pshswp)->stacka), ++c );
    }
    while((*pshswp)->elmntsb > 0)
        {
        pa(pshswp);
        if((*pshswp)->stacka->next && (*pshswp)->stacka->index > (*pshswp)->stacka->next->index)    
            sa(pshswp);
         }
   }


