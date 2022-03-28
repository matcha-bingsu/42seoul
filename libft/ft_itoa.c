/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:21:01 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 18:01:56 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_len(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*re;

	nb = n;
	i = get_len(n);
	re = (char *)malloc(i + 1);
	if (!re)
		return (0);
	if (n < 0)
	{
		*re = '-';
		nb *= -1;
	}
	if (nb == 0)
		re[0] = '0';
	re[i] = 0;
	while (nb > 0)
	{
		re[--i] = nb % 10 + '0';
		nb /= 10;
	}
	return (re);
}
