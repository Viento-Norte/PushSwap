/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 20:18:07 by legarcia          #+#    #+#             */
/*   Updated: 2022/06/14 16:41:06 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelt;

	nelt = (t_list *)malloc(sizeof (*nelt));
	if (!nelt)
		return (NULL);
	nelt->content = content;
	nelt->next = NULL;
	return (nelt);
}
