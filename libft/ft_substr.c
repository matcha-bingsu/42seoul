/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:03:20 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 00:03:22 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	
	re = 0;
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (*s && len)
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		re = (char *)malloc(len + 1);
		if (!re)
			return (0);
		ft_strlcpy(re, s + start, len + 1);
	}
	return (re);
}
