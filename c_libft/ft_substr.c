/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:03:20 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 13:32:49 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	i;

	i = 0;
	re = 0;
	if (len)
	{
		re = (char *)malloc(len + 1);
		if (!re)
			return (0);
		while (s[start + i] && i < len)
		{
			re[i] = s[start + i];
			i++;
		}
		re[i] = 0;
	}
	return (re);
}
