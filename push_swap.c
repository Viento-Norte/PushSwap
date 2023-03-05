/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:14:42 by legarcia          #+#    #+#             */
/*   Updated: 2023/03/05 19:48:49 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include"libft_ok/libft.h"
int ft_isnotnumbers(char *str)
{
int	count;


count = 0;
	while (str[count])
{
	if( str[0] == '-' && count == 0)
		count++;
	if (!ft_isdigit(str[count]))
		return(1);
	count++;
}

	return(0);
}

int main (int argc, char **argv)
{
	int	*stack;
	int	count;
	int	count2;
	count = 0;
	
	if (argc <= 1) //chequeo que si hay datos
		return(0);
stack = malloc( argc * sizeof(int)); ///genero un malloc para chequear los numeros que se ingresan son correctos
if(!stack)
	return(write(1, "1Error\n", 7));
while ( count < argc - 1)
{
	if( ft_isnotnumbers(&argv[count + 1][0]))
			return(write(1, "2Error\n", 7));
	stack[count] = ft_atoi(&argv[count + 1][0]);
	count++;
}
write(1, "point", 5);
while ( --count > -1)
{
	count2 = -1;
	while (count > ++count2)
	{
	  getchar();
	  if (stack[count] == stack[count2])
		  return(write(1,"3Error\n", 7));
  }
	ft_putnbr_fd(stack[count],1);
}
free(stack);
return(0);
}
