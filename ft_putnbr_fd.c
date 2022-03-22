/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:07:53 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/22 20:07:54 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*re;

	if (fd > 0)
	{
		re = ft_itoa(n);
		write(1, re, ft_strlen(re));
	}
}