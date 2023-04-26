#include "push_swap.h"

void static	swap_stack(t_stcklist	**stack, char *str)
{
	t_stcklist	*tmp;
	
	if (!(*stack) || !(*stack)->next)
		return ;
		
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *(stack);
	*stack = tmp;
	if (str)
			write (1, str, 2);
	}

void	ss(t_push_swap **pshswp)
{
	swap_stack(&(*pshswp)->stacka, NULL);
	swap_stack(&(*pshswp)->stackb, "ss\n");
}

void	sa(t_push_swap **pshswp)
{
	swap_stack(&((*pshswp)->stacka), "sa\n");
}

void	sb(t_push_swap **pshswp)
{
	swap_stack(&((*pshswp)->stackb), "sb\n");
}
