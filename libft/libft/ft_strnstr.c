/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:31:30 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 20:31:33 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*find;
	unsigned char	*find_from;
	char			*result;
	size_t			i;
	size_t			j;

	find = (unsigned char *)needle;
	find_from = (unsigned char *)haystack;
	result = 0;
	i = 0;
	if (!(*find))
		return (find_from);
	while (find_from[i] && i < len)
	{
		j = 0;
		result = &find_from[i];
		if (find_from[i] == find[j])
		{
			while (find_from[i] == find[j] && j < len)
			{
				i++;
				j++;
			}
			if (find[j] == 0)
				return (result);
		}
		else
			i++;
	}
	return (0);
}
