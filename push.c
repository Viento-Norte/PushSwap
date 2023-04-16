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
	while (*stckorg && swap->next)
	{
		swap->pos -= 1;
		swap = swap->next;
	}
	if(swap)
	swap->pos -= 1;
	write (1, str, 3);
}

void	pb(t_push_swap	**pshswp)
{
	push(&(*pshswp)->stacka, &(*pshswp)->stackb, "pb\n");
}

void	pa(t_push_swap	**pshswp)
{
	push(&(*pshswp)->stackb, &(*pshswp)->stacka, "pa\n");
}
