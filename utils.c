#include "push_swap.h"
///////////////////Debugging elements/////////////////

void	printstack(t_stcklist *stack)
{
	if (!stack)
		return ;
	while (stack->next)
	{
		ft_putnbr_fd(stack->num, 1);
		write (1, "\t", 1);
		ft_putnbr_fd(stack->pos, 1);
		enter();
		stack = stack->next;
	}
	ft_putnbr_fd(stack->num, 1);
	write (1, "\t", 1);
	ft_putnbr_fd(stack->pos, 1);
	enter();
}

void	enter(void)
{
	write (1, "\n", 1);
}

/*void sa(t_push_swap	*pshswp)
void sb(t_push_swap	*pshswp)
void pa(t_push_swap	*pshswp)
void pb(t_push_swap	*pshswp)
void pp(t_push_swap	*pshswp)
void ra(t_push_swap	*pshswp)
void rb(t_push_swap	*pshswp)
void rr(t_push_swap	*pshswp)
void rra(t_push_swap	*pshswp)
void rrb(t_push_swap	*pshswp)
void rrr(t_push_swap	*pshswp)






*/