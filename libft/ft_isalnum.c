/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:24:52 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/11 15:48:14 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int c)
{
	return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z');
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
