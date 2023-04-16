#include "push_swap.h"

void static	swap_stack(t_stcklist	**stack, char *str)
{
	t_stcklist	*swaplst;
	int			swapint;

	if (!(*stack) || !(*stack)->next)
		return ;
	swaplst = (*stack)->next;
	swapint = (swaplst)->num;
	swaplst->num = (*stack)->num;
	(*stack)->num = swapint;
	write (1, str, 2);
	if (str)
		write (1, "\n", 1);
}

void	ss(t_push_swap **pshswp)
{
	swap_stack(&(*pshswp)->stacka, NULL);
	swap_stack(&(*pshswp)->stackb, NULL);
	write (1, "ss\n", 3);
}

void	sa(t_push_swap **pshswp)
{
	swap_stack(&(*pshswp)->stacka, "sa\n");
}

void	sb(t_push_swap **pshswp)
{
	swap_stack(&(*pshswp)->stacka, "sb\n");
}
