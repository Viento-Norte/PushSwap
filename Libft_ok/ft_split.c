/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:31:46 by legarcia          #+#    #+#             */
/*   Updated: 2022/06/13 21:55:33 by legarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_matrfree( char **mtr, int count)
{
	if (count >= 0)
	{
		while (count >= 0)
		{
			free(mtr[count]);
			count--;
		}
	}
	free(mtr);
	return (NULL);
}

static int	ft_sizew(char *s1, char c)
{
	int	count;

	count = 0;
	while (s1[count] != c && s1[count])
		count++;
	return (count);
}

static int	ft_countw(char *s, char c)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0 ;
	if (s[count] == '\0')
		return (0);
	if (s[count] != c)
		count2 = 1;
	while (s[count])
	{
		if (s[count] == c && s[count + 1] != c && s[count + 1])
			count2++;
		count++;
	}
	return (count2);
}

static size_t	ft_search(char *s, char c)
{
	int		count;
	int		swap;

	count = 0;
	while (s[count])
	{
		swap = ft_sizew(&s[count], c);
		if (swap == 0)
			count++;
		else
			break ;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	char	*s1;
	size_t	start;
	char	**mtr;

	k = -1;
	s1 = (char *)s;
	start = 0;
	mtr = (char **)malloc(sizeof(char *) * (ft_countw(s1, c) + 1));
	if (!mtr)
		return (NULL);
	mtr[ft_countw(s1, c)] = NULL;
	while (++k < ft_countw(s1, c))
	{
		start += ft_search(&s1[start], c);
		mtr[k] = (char *)malloc(sizeof (char) * (ft_sizew(&s1[start], c) + 1));
		if (!mtr[k])
		{
			ft_matrfree(mtr, k - 1);
			return (NULL);
		}
		ft_strlcpy(mtr[k], &s1[start], ft_sizew(&s1[start], c) + 1);
		start += ft_sizew(&s1[start], c) + 1;
	}
	return (mtr);
}
