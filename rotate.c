/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:18:57 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/21 19:42:26 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void static rotate(t_stcklist	**stck, char *str)

{
    t_stcklist  *prev;

    if (!(*stck) || !(*stck)->next)
        return ;
    prev = *stck;
    *stck = (*stck)->next;
    prev->next = NULL;
    (ft_stcklstlast(*stck))->next = prev;
    if (str)
        write(1, str, 3);
}

void	rr(t_push_swap **pshswp)

{
    rotate(&(*pshswp)->stacka, NULL);
    rotate(&(*pshswp)->stackb, NULL);
    write (1, "rr\n", 3);
}

void	ra(t_push_swap **pshswp)

{
    rotate(&(*pshswp)->stacka, "ra\n");
    
}

void	rb(t_push_swap **pshswp)

{
    rotate(&(*pshswp)->stackb, "rb\n");
    
}