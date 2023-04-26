#include "push_swap.h"
///////////////////Debugging elements/////////////////
int static	ft_maxnum(t_stcklist	*stack)
{
	int	tmp;
	tmp = stack->num;
	while(stack->next)
	{
		stack = stack->next;
		if (tmp < stack->num)
			tmp = stack->num;
	}
	return(tmp);
	

}
t_push_swap	*init(int *argc,	char	**argv)
{
	t_push_swap	*pshswp;
	int n;
	pshswp = malloc(sizeof(t_push_swap));
	if(!pshswp)
		{
			write(1, "Error\n", 6);
			return(NULL);
		}
	pshswp->stacka = NULL;
	pshswp->stackb = NULL;
	n = 1;
	pshswp->stacka = newstckelt(ft_atoi(argv[n]));
	while( ++n < *argc)
		ft_stcklstadd_back(&(pshswp->stacka),newstckelt(ft_atoi(argv[n])));
	pshswp->elmntsa = n - 1;
	pshswp->elmntsb = 0;
	pshswp->maxnum = ft_maxnum(pshswp->stacka);
	return(pshswp);
}

void	ft_free(t_push_swap	**pshswp)
{
	t_stcklist	*stack;
	if (!pshswp)
		return ;
	if (((*pshswp)->stacka))
	{
		
		while((*pshswp) && ((*pshswp)->stacka)->next)
		{
			stack = ((*pshswp)->stacka)->next;
			free((*pshswp)->stacka);
			((*pshswp)->stacka) = stack;
		}
		free((*pshswp)->stacka);
	}
if (((*pshswp)->stackb))
{
		while((*pshswp) && ((*pshswp)->stackb)->next)
	{
		stack = ((*pshswp)->stackb)->next;
		free((*pshswp)->stackb);
		((*pshswp)->stackb) = stack;
	}
	free((*pshswp)->stackb);
}
free(*pshswp);
//exit(0);
}
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


void	printstacks(t_push_swap *pshswp)
{
	if (pshswp->stacka)
	{
	write(1, "\nStack A:", 10);
	write(1, "\n~~~~~~~~\n", 10);
	printstack(pshswp->stacka);
	enter();
	}
	if (pshswp->stackb)
	{
	write(1, "Stack B:", 9);	
	write(1, "\n~~~~~~~~\n", 10);
	printstack(pshswp->stackb);
	enter();
	}
		
	write(1,"Numero maximo: ",15);
	ft_putnbr_fd((pshswp)->maxnum, 1);
	enter();
	
	write(1,"Elementos en StackA: ",21);
	ft_putnbr_fd((pshswp)->elmntsa, 1);
	enter();
	write(1,"Elementos en StackB: ",21);
	ft_putnbr_fd((pshswp)->elmntsb, 1);
	enter();
}

void	enter(void)
{
	write (1, "\n", 1);
}
