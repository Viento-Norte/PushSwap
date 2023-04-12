#include"push_swap.h"
void swap_stack(t_stcklist	*stack, char *str)
{
	t_stcklist	*swaplst;
	int	swapint;
	if(!stack || !stack->next)
		return;
	swaplst = stack;
	stack = stack->next;
	swapint = stack->num;
	stack->num = swaplst->num;
	swaplst->num = swapint;
	write(1, str,2);
	if(str)
	write(1,"\n",1);
}
void swap_swap(t_stcklist	*stckA, t_stcklist *stckB)
{
swap_stack(stckA,NULL);
swap_stack(stckB,NULL);
write(1,"ss\n",3);
}

void push(t_stcklist	**stckorg, t_stcklist	**stckdst, char *str)
{
t_stcklist *swap;
if(!stckorg)
	return;
swap = *stckorg;
*stckorg = (*stckorg)->next;
swap->next = NULL;
ft_stcklstadd_back(stckdst, swap);
swap = *stckorg;
while(swap->next)
{
	swap->pos -= 1;
	swap = swap->next;
}
swap->pos -= 1;
//ft_free()
write(1, str, 3);
}

int	main (int	argc, char	**argv)
{
	t_stcklist	*stkA;
	t_stcklist	*stkB;
	int n;
stkA = NULL;
stkB = NULL;
	n = 1;
	ft_putnbr_fd(argc, 1);
	write(1,"\n",1);
	//if (argc <= 2)
	//	return (0);
	//if (ft_checkerr(argc, argv))
	//	return(write(1, "Error\n", 6));
write(1,"#################\n", 18);
stkA = newstckelt(ft_atoi(argv[n]));
write(1,"=================\n", 18);
while( ++n < argc)
	ft_stcklstadd_back(&stkA,newstckelt(ft_atoi(argv[n])));

printstack(stkA);
enter();
swap_swap(stkA,stkB);
write(1,"#################\n", 18);
printstack(stkA);
printstack(stkB);
push(&stkA, &stkB, "pa\n");
write(1,"#################\n", 18);
printstack(stkB);
enter();
printstack(stkA);
return(0);
}
