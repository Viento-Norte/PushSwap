#include "push_swap.h"


void static	rev_rot(t_stcklist	**stck, char *str)
{
t_stcklist	*first;
t_stcklist	*last;

if(!(*stck) || !(*stck)->next )
	return;
first = *stck;
write(1, "AA", 4);
last = ft_stcklstlast(*stck);
write(1, "\nAA", 4);
while ((*stck) && (*stck)->next)
	{
		if (!((*stck)->next)->next)
			(*stck)->next = NULL;
		(*stck) = (*stck)->next;
	}
write(1, "BAA", 4);
last->next = first;
	*stck = last;
if(str)
write(1, str, 4);
}
void	rrr(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stacka, NULL);
	rev_rot(&(*pshswp)->stackb, NULL);
	write(1,"rrr\n",4);
}

void	rra(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stacka, "rra\n");
}
void	rrb(t_push_swap	**pshswp)
{
	rev_rot(&(*pshswp)->stackb, "rrb\n");
}