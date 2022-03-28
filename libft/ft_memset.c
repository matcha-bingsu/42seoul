/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:10:55 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/11 19:06:48 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	value;
	unsigned char	*bp;
	size_t			i;

	value = (unsigned char)c;
	bp = (unsigned char *)b;
	i = 0;
	while (i < len)
		bp[i++] = value;
	return (bp);
}
