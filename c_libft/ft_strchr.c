/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjchoi <wonjchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:38:11 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 20:06:07 by wonjchoi         ###   ########.fr       */
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
		// return (s);
	return (0);
}
