/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:41:44 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 01:02:34 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	int		i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = -1;
	if (dest > source)
	{
		i = (int)len;
		while (--i > -1)
			dest[i] = source[i];
	}
	else if (len)
		while (++i < (int)len)
			dest[i] = source[i];
	return (dest);
}
