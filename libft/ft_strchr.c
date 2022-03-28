/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:38:11 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 21:19:28 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	tmp;

	tmp = (char)c;
	while (*s)
	{
		if (*s == tmp)
			return ((char *)s);
		s++;
	}
	if (!tmp)
		return ((char *)s);
	return (0);
}
