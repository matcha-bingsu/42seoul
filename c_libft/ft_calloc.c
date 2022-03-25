/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjchoi <wonjchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:35:16 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 20:09:58 by wonjchoi         ###   ########.fr       */
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
