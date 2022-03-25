/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjchoi <wonjchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:44:37 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 20:07:53 by wonjchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	char	*result;

	tmp = (char)c;
	result = 0;
	while (*s)
	{
		if (*s == tmp)
			result = (char *)s;
		s++;
	}
	if (!tmp)
		return ((char *)s);
	return (result);
}
