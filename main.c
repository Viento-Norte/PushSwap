#include"push_swap.h"
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
return(pshswp);
}
void	ft_free(t_push_swap	**pshswp)
{
	t_stcklist	*stack;
	if (!pshswp)
		return ;
	stack = ((*pshswp)->stacka)->next;
	while(stack && stack->next)
	{
		stack = ((*pshswp)->stacka)->next;
		free((*pshswp)->stacka);
		((*pshswp)->stacka) = stack;
	}
if (((*pshswp)->stackb))
{
	stack = ((*pshswp)->stackb)->next;
	while(stack && stack->next)
	{
		stack = ((*pshswp)->stackb)->next;
		free((*pshswp)->stackb);
		((*pshswp)->stackb) = stack;
	}
}
free((*pshswp)->stacka);
free((*pshswp)->stackb);
free(*pshswp);
}

int	main (int	argc, char	**argv)
{
	t_push_swap	*pshswp;
	
	if (argc <= 2)
		return (0);
	if (ft_checkerr(argc, argv))
		return(write(1, "Error\n", 6));
	pshswp = init( &argc,	argv);
	if (!pshswp)
		{
		ft_free(&pshswp);		
		return(write(1, "Error\n", 6));
		}
	printstack(pshswp->stacka);
	enter();
	rra(&pshswp);
	
	printstack(pshswp->stacka);
	enter();
	pb(&pshswp);
	pb(&pshswp);
	rr(&pshswp);
	enter();
	printstack(pshswp->stacka);
	enter();
	printstack(pshswp->stackb);
	enter();
	ft_free(&pshswp);
}
