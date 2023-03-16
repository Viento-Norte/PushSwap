/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:14:42 by legarcia          #+#    #+#             */
/*   Updated: 2023/03/16 19:57:12 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include"libft_ok/libft.h"
//retorna 1 si las cadenas de caracteres de str son numeros
//retorna 0 si las cadenas de carracteres de str son distintas a numeros
//argc es la cantidad de cadenas de caracteres existentes, si argc es >  a la matriz str ---> SEGmentation fault.
static int ft_isnumbers(int argc, char **str)
{
	int	x;
	int	y;
	y = 0;
	x = 0;
	while (++x < argc)
	{
		if( str[x][y] == '-' && y == 0 && str[x][y+1])
			y++;
		while (str[x][y])
		{
			if (ft_isdigit(str[x][y]))
				y++;
			else
				return(0);
		}
	y = 0;
	}
	return(1);
}

//Buscado cadenas duplicadas en la matriz argv.
//retorna 1 si hay cadenas duplicadas, caso contrari retorna 0
static int ft_havedupli(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	while(++x < argc)
	{
		y = x ;
		while (++y < argc)
		{
			if(ft_strlen(&argv[x][0]) == ft_strlen(&argv[y][0]) 
				&&	!ft_memcmp(&argv[x][0], &argv[y][0], ft_strlen(&argv[y][0])))
				return(1);
		}
	}
	return(0);				
}
//recibe numeros en formato char, y busca que este en rango int.
//si esta en rango retorna 1 
//int max 2147483647, int min -2147483648
static int ft_isnuminrange(int argc, char **argv)
{
	int	x;

	x = 0;
	while(++x < argc)
	{
		if(ft_strlen(&argv[x][0]) == 11	&&	argv[x][0] == '-' && 
			ft_strncmp(&argv[x][0], "-2147483648", 11) > 0)
				return(0);
		else if(ft_strlen(&argv[x][0]) == 10	&&
				ft_strncmp(&argv[x][0], "2147483647", 10) > 0)
			return(0);
		else if(ft_strlen(&argv[x][0]) > 11)
			return(0);
	}
	return(1);				
}

// chequea que argv sean numeros enteros en rango(INT) y no esten duplicdos.
// 
int ft_checkerr (int argc, char **argv)
{
	
	if (!ft_isnumbers(argc, argv) || ft_havedupli(argc,argv) || !ft_isnuminrange(argc, argv))
		return(1);
	return(0);
}

int main (int argc, char **argv)
{
	if (argc <= 1) //chequeo que si hay datos
		return(0);
	if (ft_checkerr(argc, argv))
		write(1, "Error\n", 6);
	return(0);
}

