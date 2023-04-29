/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:53:22 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/29 17:39:08 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	lst_len(t_stcklist	*list)
{
	int	count;

	if (!list)
		return (0);
	count = 1;
	while (list->next)
	{
		list = list->next;
		count++;
	}
	return (count);
}

//Crea un nuevo elemento para el stack, con el numero number 
//retorna el puntero a este nuevo elemento
t_stcklist	*newstckelt(int number)
{
	t_stcklist	*nelt;

	nelt = (t_stcklist *)malloc(sizeof(*nelt));
	if (!nelt)
		return (NULL);
	nelt->num = number;
	nelt->index = -1;
	nelt->next = NULL;
	return (nelt);
}

//Devuelve el puntero del stack
t_stcklist	*ft_stcklstlast(t_stcklist *stack)
{
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

//agrega el elemento new, a la lista enlazada, en la ultima posicion.
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
//agrega el elemento new, a la lista enlazada, en la primera posicion.

void	ft_stcklstadd_front(t_stcklist **lst, t_stcklist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
