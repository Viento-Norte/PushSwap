/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:58:45 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/30 14:59:47 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_big_sorter(t_push_swap **pshswp)
{
    long med;
    long c;
    
    c = (*pshswp)->elmntsa;
    med = ((*pshswp)->elmntsa) / 2;

    while(c > 0)
    {
        if ((*pshswp)->stacka->index < med)  
        {
         
            pb((pshswp));
            rb(pshswp);
        }
        else if ((*pshswp)->elmntsb > 0 && (*pshswp)->stackb->index > (*pshswp)->stacka->index )
            {
                pb(pshswp);
                sb(pshswp);
            }
        else
            pb(pshswp);
        
                
        c--;
    
}
    }


//implementar GOTO