/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:46:59 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 00:21:18 by chaeyhan         ###   ########.fr       */
/*                                           i                                 */
/* ************************************************************************** */
#include "libft.h"

static int	get_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static char	**ft_free(char **re)
{
	int	i;

	i = -1;
	while (re[++i])
		free(re[i]);
	free(re);
	return (0);
}

static void	ft_assign(const char *from, const char *s, char *re)
{
	int	i;

	i = 0;
	while (from < s)
		re[i++] = *from++;
	re[i] = 0;
}

char **ft_split(char const *s, char c)
{
	int		index;
	char		**re;
	const char	*from;

	index = 0;
	re = (char **)malloc(sizeof(char *) * (get_len(s, c) + 1));
	if (!s || !re)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			from = s;
			while (*s != c && *s)
				s++;
			re[index] = (char *)malloc(s - from + 1);
			if (!re[index])
				return (ft_free(re));
			ft_assign(from, s, re[index++]);
		}
		else
			s++;
	}
	re[index] = 0;
	return (re);
}
