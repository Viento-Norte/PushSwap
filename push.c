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
	push(&(*pshswp)->stacka, &(*pshswp)->stackb, "pb\n");
	if((*pshswp)->elmntsb >= 0 && (*pshswp)->elmntsa > 0)
	{
		(*pshswp)->elmntsb +=1;
		(*pshswp)->elmntsa -=1;
	}

}

void	pa(t_push_swap	**pshswp)
{
	push(&(*pshswp)->stackb, &(*pshswp)->stacka, "pa\n");
	if((*pshswp)->elmntsa >= 0 && (*pshswp)->elmntsb > 0)
	{
		(*pshswp)->elmntsa +=1;
		(*pshswp)->elmntsb -=1;
	}
}
