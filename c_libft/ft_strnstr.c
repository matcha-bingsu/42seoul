/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjchoi <wonjchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:31:30 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 20:06:48 by wonjchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*result;
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			result = &haystack[i];
			while (haystack[i + j] == needle[j] && i + j < len)
				j++;
			if (needle[j] == 0)
				return ((char *)result);
		}
		else
			i++;
	}
	return (0);
}
