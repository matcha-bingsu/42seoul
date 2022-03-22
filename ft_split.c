/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:46:59 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/21 17:47:01 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c && *s != s[0])
			i++;
		s++;
	}
	return (i + 1);
}

char **ft_split(char const *s, char c)
{
	int		index;
	int		i;
	char	**re;
	char	*from;

	index = 0;
	re = (char **)malloc(sizeof(char *) * (get_len(s, c) + 1));
	if (!re)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s != c && *s)
				s++;
			re[index] = (char *)malloc(s - from + 1);
			if (!re[index])
			{
				free(re);
				return (0);
			}
			i = 0;
			while (from < s)
				re[index][i++] = *from++;
			re[index++][i] = 0;
		}
		else
			s++;
	}
	return (re);
}