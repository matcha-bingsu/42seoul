/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjchoi <wonjchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:55 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 20:04:06 by wonjchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *buf, int c, size_t count)
{
	while (count--)
	{
		if (*(unsigned char *)buf == (unsigned char)c)
			return ((void *)buf);
		buf++;
	}
    return (0);
}
