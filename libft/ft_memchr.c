/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:55 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 19:04:11 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *buf, int c, size_t count)
{
	while (count--)
	{
		if ((unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
    return (0);
}
