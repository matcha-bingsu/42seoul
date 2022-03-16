/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:35:16 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/16 17:56:15 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *)malloc(nmemb * size);
	if (!result)
		return (0);
	ft_bzero(result, (nmemb * size));
	return (0);
}
