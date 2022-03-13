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

static int	isalpha(int c)
{
	char	tmp;

	tmp = (char)c;
	if(tmp >= 'A' && tmp <= 'Z')
		return (1);
	else if (tmp >= 'a' && tmp <= 'z')
		return (2);
	else
		return (0);	
}

static int	isdigit(int c)
{
	return (c + '0' >= '0' && c + '0' <= '9');
}

int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
