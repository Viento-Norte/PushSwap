/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:52:15 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/19 18:11:59 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	pshswp->elmntsa = n - 1;
	pshswp->elmntsb = 0;
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
exit(0);
}

int	main (int	argc, char	**argv)
{
	t_push_swap	*pshswp;
	
	
	if (ft_checkerr(argc, argv))
		return(write(1, "Error\n", 6));
	if (argc <= 2)
		return (0);
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
	printstack(pshswp->stacka);
	enter();
	printstack(pshswp->stackb);
	enter();
	pb(&pshswp);
	printstack(pshswp->stacka);
	enter();
	printstack(pshswp->stackb);
	enter();
	enter();
	enter();
	ft_putnbr_fd(pshswp->elmntsa, 1);
	enter();
	ft_putnbr_fd(pshswp->elmntsb, 1);
	rr(&pshswp);
	enter();
	printstack(pshswp->stacka);
	enter();
	printstack(pshswp->stackb);
	enter();
	enter();
	ft_putnbr_fd(pshswp->elmntsa, 1);
	enter();
	ft_putnbr_fd(pshswp->elmntsb, 1);
	//ft_putnbr_fd(lst_len(pshswp->), 1);
	//ft_putnbr_fd(lst_len(pshswp->stackb), 1);
	ft_free(&pshswp);
	
	//exit(0);
}
