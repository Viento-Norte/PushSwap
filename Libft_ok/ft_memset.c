/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:18:31 by legarcia          #+#    #+#             */
/*   Updated: 2022/05/19 17:53:20 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	v;
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	v = (unsigned char)c;
	str = (unsigned char *)b;
	while (i < len)
	{
		*str++ = v;
		i++;
	}
	return (b);
}
