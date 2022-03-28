/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:13:18 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/15 00:28:28 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		len;
	char	*re;

	len = ft_strlen(string);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	len = -1;
	while (string[++len])
		re[len] = string[len];
	re[len] = '\0';
	return (re);
}
