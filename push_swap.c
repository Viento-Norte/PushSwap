/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:42:46 by legarcia          #+#    #+#             */
/*   Updated: 2023/03/29 16:57:23 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include"libft_ok/libft.h"

typedef struct s_stcklist
{
	int	num;
	int	pos;
	struct s_stcklist	*next;
}	t_stcklist;

t_stcklist	*newstckelt(int numb, int pos)
{
	t_stcklist	*nelt;

	nelt = (t_stcklist *)malloc(sizeof(*nelt));
	if (!nelt)
		return(NULL);
	nelt->num = numb;
	nelt->pos = pos;
	nelt->next = NULL;
	return(nelt);
}
t_stcklist	*ft_stcklstlast(t_stcklist *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}


void	ft_stcklstadd_back(t_stcklist **lst, t_stcklist *new)
{
	t_stcklist	*lst1;

	if (*lst)
	{
		lst1 = ft_stcklstlast(*lst);
		lst1->next = new;
	}
	else
	*lst = new;
}
void	ft_stcklstadd_front(t_stcklist **lst, t_stcklist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void enter()
{
	write(1, "\n",1);
}

//**********************************************************//
int	main (int	argc, char	**argv)
{
	t_stcklist	*stkA;
	int n;
stkA = NULL;
	n = 1;
	ft_putnbr_fd(argc, 1);
	write(1,"\n",1);
	if (argc < 1)
		return (0);
	if (ft_checkerr(argc, argv))
		return(write(1, "Error\n", 6));
stkA = newstckelt(ft_atoi(argv[n]), n);
while( ++n < argc)
	ft_stcklstadd_back(&stkA,newstckelt(ft_atoi(argv[n]), n ));
while( --n > argc)
	ft_stcklstadd_front(&stkA,newstckelt(ft_atoi(argv[n]), (ft_stcklstlast(stkA))->pos +10 ));
	
//ft_putnbr_fd(stkA->num, 1);
//write(1, "\n",1);
ft_putnbr_fd((stkA->next)->pos, 1);
enter();
ft_putnbr_fd((stkA->next)->num, 1);

return(0);
}
