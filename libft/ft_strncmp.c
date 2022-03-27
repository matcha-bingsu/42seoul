/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:47:29 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/27 00:20:07 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
    size_t  i;

    i = 0;
    while (len--)
    {
        if (str1[i] != str2[i] || !str1[i] || !str2[i])
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	i++;
    }
    return (0);
}
