/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:49:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 13:47:56 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*re;

	i = 0;

	if (!s1 && !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	re = (char *)malloc(len);
	if (!re)
		return (0);
	while (*s1)
		re[i++] = *s1++;
	while (*s2)
		re[i++] = *s2++;
	re[i] = 0;
	return (re);
}
