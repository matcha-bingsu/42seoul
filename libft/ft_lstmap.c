/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyhan <chaeyhan@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:25:03 by chaeyhan          #+#    #+#             */
/*   Updated: 2022/03/25 21:45:21 by chaeyhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*re;

	ft_lstiter(lst, *f);
	new = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!new)
		return (0);
	re = new;
	while (lst)
	{
		new->next = lst->next;
		new = new->next;
		lst = lst->next;
	}
	return (re);
}
