#include"push_swap.h"


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

swap_swap(&stkA,&stkB);
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

push(&stkA, &stkB, "pa\n");
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);
rotate_twin(&stkA, &stkB);
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

push(&stkA, &stkB, "pa\n");
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

push(&stkA, &stkB, "pb\n");
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

swap_swap(&stkB,&stkA);
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

rotate_twin(&stkA, &stkB);
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

rev_rot_rot(&stkA, &stkB);
write(1,"#################\n", 18);
printstack(stkA);
enter();
printstack(stkB);

return(0);
}
