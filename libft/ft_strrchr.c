/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:44:37 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 21:21:41 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char		tmp;
	const char	*result;

	tmp = (char)c;
	result = 0;
	while (*s)
	{
		if (*s == tmp)
			result = s;
		s++;
	}
	if (!tmp)
		return ((char *)s);
	return ((char *)result);
}
