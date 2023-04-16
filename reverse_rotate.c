#include "push_swap.h"


void static	rev_rot(t_stcklist	**stck, char *str)
{

t_stcklist	*last;
t_stcklist	*first;
int	swap;

if(!(*stck)->next)
	return;
first = *stck;
swap = first->num;
last = ft_stcklstlast(*stck);
while((*stck)->next)
	{
		(*stck)->num = last->num;
		*stck = (*stck)->next;
		last->num = swap;
		swap = (*stck)->num; 
	}	
	(*stck)->num = last->num;
	*stck = first;
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