/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:52:15 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/26 23:21:30 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void ft_sort_2(t_push_swap **pshswp)
{
	int	tmp;
	tmp =(*pshswp)->stacka->num ; 
	
	if((((*pshswp)->stacka->next->num) < tmp ))
		sa(pshswp);

}
void sorter(t_push_swap	**pshswp)
{
	if((*pshswp)->elmntsa== 2)
		ft_sort_2(pshswp);
	/*else if((*pshswp)->elmntsa== 3)
		ft_sort_3(pshswp);
	else if((*pshswp)->elmntsa== 4)
		ft_sort_4(pshswp);
	else if((*pshswp)->elmntsa== 5)
		ft_sort_5(pshswp);
	else if((*pshswp)->elmntsa== 6)
		ft_sort_6(pshswp);
*/
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

	sorter(&pshswp);
	
	/*printstacks(pshswp);
	sa(&pshswp);
	printstacks(pshswp);
	pb(&pshswp);
	pb(&pshswp);
	pb(&pshswp);
	printstacks(pshswp);
	sb(&pshswp);
	printstacks(pshswp);
	ss(&pshswp);
	printstacks(pshswp);	
	pa(&pshswp);
	printstacks(pshswp);
	pb(&pshswp);
	ra(&pshswp);
	printstacks(pshswp);
	rb(&pshswp);
	printstacks(pshswp);
	rr(&pshswp);
	printstacks(pshswp);
	rra(&pshswp);
	printstacks(pshswp);
	rrb(&pshswp);
	printstacks(pshswp);
	rrr(&pshswp);
	printstacks(pshswp);
	ft_free(&pshswp);
	*/}
