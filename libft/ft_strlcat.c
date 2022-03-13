/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:17:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 00:31:02 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	q;

	i = 0;
	j = 0;
	q = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i + 1 > size)
		return (size + j);
	while (src[q] && i + 1 + q < size)
	{
		dest[i + q] = src[q];
		q++;
	}
	dest[i + q] = 0;
	return (i + j);
}
