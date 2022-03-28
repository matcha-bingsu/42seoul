/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:35:24 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 18:08:43 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*re;
	size_t	i;
	size_t	len;

	i = -1;
	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	while (++i < len)
		re[i] = f(i, s[i]);
	re[i] = 0;
	return (re);
}
