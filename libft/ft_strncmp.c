/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:47:29 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 14:55:52 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int strncmp(const char* str1, const char* str2, size_t len)
{
    size_t  i;

    i = -1;
    while (*str1 && *str2 && ++i < len)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}