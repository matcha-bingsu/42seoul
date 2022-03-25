/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:47:29 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 22:02:41 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
    size_t  i;

    i = 0;
    while (str1[i] && str2[i] && i < len)
    {
        if (str1[i] != str2[i])
		break;
	i++;
    }
    if (i == len)
	    return (0);
    return (str1[i] - str2[i]);
}
