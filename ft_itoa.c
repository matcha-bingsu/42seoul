/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:21:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/21 18:21:03 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*re;

	i = get_len(n);
	if (n < 0)
		i++;
	re = (char *)malloc(i + 1);
	if (!re)
		return (0);
	if (n < 0)
		*re = '-';
	re[i] = 0;
	while (n > 0)
	{
		re[--i] = n % 10;
		n /= 10;
	}
	return (re);
}