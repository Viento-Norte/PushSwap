#include "push_swap.h"

void swap_stack(t_stcklist	**stack, char *str)
{
	t_stcklist  *swaplst;
	int swapint;

	if(!(*stack) || !(*stack)->next)
		return;
	swaplst = (*stack)->next;
	swapint = (swaplst)->num;
	swaplst->num = (*stack)->num;
	(*stack)->num = swapint;
	write(1, str,2);
	if(str)
	write(1,"\n",1);
}
void swap_swap(t_stcklist	**stckA, t_stcklist **stckB)
{
swap_stack(stckA,NULL);
swap_stack(stckB,NULL);
write(1,"ss\n",3);
}

void push(t_stcklist	**stckorg, t_stcklist	**stckdst, char *str)
{
t_stcklist *swap;

if(!(*stckorg))
	return;
swap = (*stckorg)->next;
(*stckorg)->next = NULL; 
ft_stcklstadd_front(stckdst,(*stckorg));
*stckorg = swap;
while(swap->next)
	{
	swap->pos -= 1;
	swap = swap->next;
	}
swap->pos -=	1;
write(1, str, 3);
}

void	rotate(t_stcklist	**stck, char *str)
{
t_stcklist	*next;
t_stcklist	*prev;
int	swap;

if(!(*stck)->next)
	return;
next = (*stck)->next;
prev = *stck;
swap = prev->num; // ultimo
while(next->next)
	{
		prev->num = next->num;
		prev = next;
		next = next->next;
	}
prev->num = next->num;
next->num = swap;	
if(str)
write(1, str, 3);
}

void	rotate_twin(t_stcklist	**stcka,t_stcklist	**stckb)
{
rotate(stcka,NULL);
rotate(stckb,NULL);
write(1,"rr\n",3);
}

void	rev_rot(t_stcklist	**stck, char *str)
{

t_stcklist	*last;
t_stcklist	*first;

int	swap;

if(!(*stck)->next)
	return;
first = *stck;
swap = first->num;
last = ft_stcklstlast(*stck);
while((*stck)->next)
	{
		(*stck)->num = last->num;
		*stck = (*stck)->next;
		last->num = swap;
		swap = (*stck)->num; 
	}	
	(*stck)->num = last->num;
	*stck = (*stck)->next;
if(str)
write(1, str, 3);
}
void	rev_rot_rot(t_stcklist	**stcka,t_stcklist	**stckb)
{
rotate(stcka,NULL);
rotate(stckb,NULL);
write(1,"rrr\n",4);
}
