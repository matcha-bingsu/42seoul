/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:44:13 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 17:44:15 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ss1;
    unsigned char   *ss2;
    size_t          i;

    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    i = -1;

    while (++i < n)
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
    return (0);
}