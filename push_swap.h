/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:30:09 by legarcia          #+#    #+#             */
/*   Updated: 2023/04/19 18:10:09 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<unistd.h>
# include<stdio.h>
# include "Libft_ok/libft.h"


typedef struct s_stcklist
{
	int					num;
	int					pos;
	struct s_stcklist	*next;
}	t_stcklist;

typedef struct s_push_wap
{
	t_stcklist	*stacka;
	t_stcklist	*stackb;
	int			elmntsa;
	int			elmntsb;
	int			maxnum;
}	t_push_swap;

int			ft_checkerr(int argc, char **argv);
int			lst_len(t_stcklist	*list);
t_stcklist	*newstckelt(int numb);
t_stcklist	*ft_stcklstlast(t_stcklist *lst);
void		ft_stcklstadd_back(t_stcklist **lst, t_stcklist *new);
void		ft_stcklstadd_front(t_stcklist **lst, t_stcklist *new);
void		sa(t_push_swap	**pshswp);
void		sb(t_push_swap	**pshswp);
void		ss(t_push_swap	**pshswp);
void		pa(t_push_swap	**pshswp);
void		pb(t_push_swap	**pshswp);
void		ra(t_push_swap **pshswp);
void		rb(t_push_swap **pshswp);
void		rr(t_push_swap **pshswp);
void		rra(t_push_swap	**pshswp);
void		rrb(t_push_swap	**pshswp);
void		rrr(t_push_swap	**pshswp);
//void		rev_rot(t_stcklist	**stck, char *str);
//void		rev_rot_rot(t_stcklist	**stcka, t_stcklist	**stckb);
////////////////////debugging elements/////////////
void		enter(void);
void		printstack(t_stcklist *stack);

#endif
