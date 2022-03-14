/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:55 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 15:43:39 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *buf, int c, size_t count)
{
    unsigned char   *str;
    char            find;
    size_t          i;

    str = (unsigned char *)buf;
    find = (unsigned char)c;
    i = -1;

    while (*str && ++i < count)
    {
        if (*str == find)
            return (str);
        str++;
    }
    return (0);
}