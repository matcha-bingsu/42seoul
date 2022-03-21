/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:11:40 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/21 17:37:46 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char	*re;
	size_t	i;
	size_t	len;

	printf("asas");
	i = 0;
	if (s1[i])
	{
		len = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[len]) && i < len)
			len--;
		re = (char *)malloc(len - i + 2);
		if (!re)
			return (0);
		ft_strlcpy(re, &s1[i], len - i + 2);
		return (re);
	}
	else
		return (0);
}
