/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:38:11 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 00:43:23 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	char	*ss;

	tmp = (char)c;
	ss = (char *)s;
	while (*ss)
	{
		if (*ss == tmp)
			return (ss);
		ss++;
	}
	return (0);
}
