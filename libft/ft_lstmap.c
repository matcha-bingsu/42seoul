/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:25:03 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/28 01:41:43 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*re;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new = ft_lstnew(f(lst->content));
	re = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew(f(lst->content));
		if (new->next)
		{
			ft_lstclear(&re, del);
			return (0);
		}
		new = new->next;
	}
	return (re);
}
