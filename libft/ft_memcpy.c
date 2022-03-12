/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:39:31 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:11 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t		i;

	if (!dest && !src)
		return (0);
	i = -1;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;

	while (++i < count)
		dest2[i] = src2[i];
	return (dest2);
}
