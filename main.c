#include"push_swap.h"

int	main (int	argc, char	**argv)
{
	t_stcklist	*stkA;
	int n;
stkA = NULL;
	n = 0;
	ft_putnbr_fd(argc, 1);
	write(1,"\n",1);
	if (argc < 1)
		return (0);
	if (ft_checkerr(argc, argv))
		return(write(1, "Error\n", 6));
stkA = newstckelt(ft_atoi(argv[n]), n);
while( ++n < argc)
	ft_stcklstadd_back(&stkA,newstckelt(ft_atoi(argv[n]), n ));
//while( --n > argc)
	//ft_stcklstadd_front(&stkA,newstckelt(ft_atoi(argv[n]), argc - n ));
	
//ft_putnbr_fd(stkA->num, 1);
//write(1, "\n",1);
ft_putnbr_fd(((stkA->next)->next)->pos, 1);
enter();
ft_putnbr_fd(((stkA->next)->next)->num, 1);

enter();

printstack(*stkA);

return(0);
}
