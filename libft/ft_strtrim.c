/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:11:40 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 14:08:32 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*re;
	size_t	i;
	size_t	len;

	i = 0;
	re = 0;
	if (s1[i] && set)
	{
		len = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[len] && ft_strchr(set, s1[len]) && i < len)
			len--;
		re = (char *)malloc(len - i + 2);
		if (re)
			ft_strlcpy(re, &s1[i], len - i + 2);
	}
	return (re);
}
