/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:24:56 by legarcia          #+#    #+#             */
/*   Updated: 2022/06/12 22:17:28 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*save;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	save = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_lst = ft_lstnew(tmp);
		if (!new_lst)
		{
			ft_lstclear(&save, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&save, new_lst);
		lst = lst->next;
	}
	return (save);
}
