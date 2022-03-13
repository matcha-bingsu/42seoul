/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:44:37 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/13 00:46:33 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	char	*ss;
	char	*result;

	tmp = (char)c;
	ss = (char *)s;
	result = 0;
	while (*ss)
	{
		if (*ss == tmp)
			result = ss;
		ss++;
	}
	return (result);
}
