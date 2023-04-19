#include"push_swap.h"
int	lst_len(t_stcklist	*list)
{
	int	count;

	if (!list)
		return(0);
	count = 1;
	while(list->next)
	{
		list = list->next;
		count++;	
	}
	return(count);
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
	nelt->pos = 1;
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
		new->pos = lst1->pos + 1;
		lst1->next = new;
	}
	else
	*lst = new;
}
//agrega el elemento new, a la lista enlazada, en la primera posicion.

void	ft_stcklstadd_front(t_stcklist **lst, t_stcklist *new)
{
	t_stcklist	*lst_swap;

	if (!lst || !new)
		return ;
	new->next = *lst;
	new->pos = 1;
	lst_swap = *lst;
	while (lst_swap && lst_swap->next)
	{
		lst_swap->pos += 1;
		lst_swap = lst_swap->next;
	}
	if (lst_swap)
	lst_swap->pos += 1;
	*lst = new;
}