/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:49:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/16 21:05:01 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	size_t	i;
	char	*result;

	i = -1;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(length);
	if (!result)
		return (0);
	while (s1[++i])
		result[i] = s1[i];
	while (i < length)
		result[i++] = *s2++;
	result[i] = 0;
	return (result);
}
