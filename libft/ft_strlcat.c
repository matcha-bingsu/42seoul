/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:17:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 20:29:31 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	q;

	i = 0;
	j = 0;
	q = 0;
	i = ft_strlen(dest);
	j = ft_strlen(src);
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
