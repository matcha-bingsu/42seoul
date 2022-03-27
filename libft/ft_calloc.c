/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:35:16 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/24 23:21:04 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*re;

	re = 0;
	if (nmemb * size <= 2147483647)
		re = (void *)malloc(nmemb * size);
	if (!re)
		return (0);
	ft_bzero(re, (nmemb * size));
	return (re);
}
