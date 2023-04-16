#include "push_swap.h"

void static rotate(t_stcklist	**stck, char *str)

{
    t_stcklist  *next;
    t_stcklist  *prev;
    int         swap;

    if (!(*stck) || !(*stck)->next)
        return;
    next = (*stck)->next;
    prev = *stck;
    swap = prev->num;
    while (next->next)
    {
        prev->num = next->num;
		prev = next;
		next = next->next;
	}
    prev->num = next->num;
    next->num = swap;	
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