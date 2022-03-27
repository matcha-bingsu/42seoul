/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:41:44 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/27 23:33:31 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t		i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = -1;
	if ((size_t)(dest - source + 1) <= len)
		while (--len)
			dest[len] = source[len];
	else if (len != 0)
		while (++i < len)
			dest[i] = source[i];
	return (dest);
}
