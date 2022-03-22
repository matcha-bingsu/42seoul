/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:03:20 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/16 20:47:06 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	length;
	int		i;

	i = 0;
	result = 0;
	if (len - start > 0)
	{
		length = ft_strlen(s);
		if (length >= len)
			result = (char *)malloc(len - start + 1);
		else if (length < len)
			result = (char *)malloc(length - start + 1);
		if (!result)
			return (0);
		while (s[start] && start < len)
			result[i++] = s[start++];
		result[i] = 0;
	}
	else
		return (0);
	return (result);
}

