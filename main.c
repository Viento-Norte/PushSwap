/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:52:15 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/29 20:15:12 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int nextmin(t_stcklist *stack, int min)
{

	write(1,"AQui\n",5);
	ft_putnbr_fd(min,1);
	
	while(stack && stack->next)
	{
		if(stack->index == -1 && stack->num > min && stack->num < tmp )
			min = stack->num;
		if(stack->index == -1 && stack->num > min && stack->num < tmp )
		
		stack = stack->next;
	}
	if(stack->index == -1 && stack->num > min )
			min = stack->num;
	return(min);
}
void	ft_index(t_push_swap	**pshswp)
{
int c;
t_stcklist *tmp;
int	min;
tmp = (*pshswp)->stacka;
min = ft_minnum(tmp);
ft_putnbr_fd(min,1);
c = 1;
while ((*pshswp)->elmntsa <= c)
{
while (tmp && tmp->next && (*pshswp)->elmntsa >= c )
{
	if (min == tmp->num && c == -1)
		{
		tmp->index = c++;
		break;
		}
	tmp = tmp->next;
}
tmp = (*pshswp)->stacka;
min = nextmin(tmp, min);
}	
}
int	is_sorter(t_stcklist *stack)
{
	
	while(stack->next)
	{
		if((stack->num) > (stack->next)->num)
			return(0);
		stack = stack->next;
	}
	return(1);
}
void ft_sorter(t_push_swap	**pshswp)
{
	printstacks(*pshswp);
}
int	main (int	argc, char	**argv)
{
	t_push_swap	*pshswp;
	
	
	if (ft_checkerr(argc, argv))
		{
		write(2, "Error\n", 6);
		return (0);
		}
	if (argc <= 2)
		return( 0);
	pshswp = init(&argc, argv);
	if (!pshswp)
		{
		ft_free(&pshswp);
		write(2, "Error\n", 6);
		return( 0);
		}
	ft_index(&pshswp);
	sorter(&pshswp);
	printstacks(pshswp);

//	if(is_sorter(pshswp->stacka))
//		write(1,"Ordenado\n",9);
	
	ft_free(&pshswp);
	
	return( 0);
	}



