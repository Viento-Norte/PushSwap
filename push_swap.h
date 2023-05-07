/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:30:09 by legarcia          #+#    #+#             */
/*   Updated: 2023/05/07 21:06:23 by legarcia         ###   ########.fr       */
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
	long int			index;
	struct s_stcklist	*next;
}	t_stcklist;

typedef struct s_push_wap
{
	t_stcklist	*stacka;
	t_stcklist	*stackb;
	long			elmntsa;
	long			elmntsb;
	int			maxnum;
	int			minnum;
	long		maxindex;
}	t_push_swap;

int			ft_checkerr(int argc, char **argv);
int			lst_len(t_stcklist	*list);
int 		ft_maxnum(t_stcklist	*stack);
int 		ft_minnum(t_stcklist	*stack);
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
int			is_sorter(t_stcklist *stack);
void		ft_sort_2(t_push_swap **pshswp);
void		ft_sort_3(t_push_swap **pshswp);
void		ft_sort_4(t_push_swap **pshswp);
void		ft_sort_5(t_push_swap **pshswp);
void		ft_big_sorter(t_push_swap **pshswp);
void    ft_giant_sorter(t_push_swap **pshswp);
void		ft_sort(t_push_swap	**pshswp);

void 		sorter(t_push_swap	**pshswp);

t_push_swap	*init(int *argc,	char	**argv);
void		ft_free(t_push_swap	**pshswp);
void		ft_index(t_push_swap	**pshswp);
//void		rev_rot(t_stcklist	**stck, char *str);
//void		rev_rot_rot(t_stcklist	**stcka, t_stcklist	**stckb);
////////////////////debugging elements/////////////
void		enter(void);
void		printstack(t_stcklist *stack);
void		printstacks(t_push_swap *pshswp);
#endif
