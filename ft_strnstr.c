/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:31:30 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/16 18:38:57 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	result = 0;
	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			result = (char *)&haystack[i];
			while (haystack[i] == needle[j] && i < len)
			{
				i++;
				j++;
			}
			if (needle[j] == 0)
				return (result);
		}
		else
			i++;
	}
	return (result);
}

