/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:30:09 by legarcia          #+#    #+#             */
/*   Updated: 2023/03/17 19:13:54 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<unistd.h>
# include<stdio.h>
# include "Libft_ok/libft.h"

typedef struct s_stcklist
{
	int	num;
	int	pos;
	struct s_stcklist	*next;
}	t_stcklist;

int	ft_checkerr(int argc, char **argv);
t_stcklist	*newstckelt(int numb);
t_stcklist	*ft_stcklstlast(t_stcklist *lst);
void	ft_stcklstadd_back(t_stcklist **lst, t_stcklist *new);
void	ft_stcklstadd_front(t_stcklist **lst, t_stcklist *new);
void	printstack(t_stcklist *stack);
void	swap_stack(t_stcklist	**stack, char *str);
void	swap_swap(t_stcklist	**stckA, t_stcklist **stckB);
void	push(t_stcklist	**stckorg, t_stcklist	**stckdst, char *str);
void	rotate(t_stcklist	**stck, char *str);
void	rotate_twin(t_stcklist	**stcka,t_stcklist	**stckb);
void	enter();
#endif
