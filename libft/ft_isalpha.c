/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:18:12 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/11 01:23:41 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	char	tmp;

	tmp = (char)c;
	if (tmp >= 'A' && tmp <= 'Z')
		return (1);
	else if (tmp >= 'a' && tmp <= 'z')
		return (2);
	else
		return (0);
}
