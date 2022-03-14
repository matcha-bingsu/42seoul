/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:41:44 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/12 01:01:49 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	int		num;
	size_t		i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = -1;
	if (dest > source && dest - source < len)
	{
		num = len - (dest - source);
		while (num >= 0)
			dest[--len] = dest[num--];
		i = -1;
		while (++i < len - num)
			dest[i] = source[i];
	}
	else
		while (++i < len)
			dest[i] = source[i];
	return (dest);
}
