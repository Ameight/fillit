/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:44:19 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 19:32:40 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*curr;
	t_list		*first;

	if (!lst || !f || !(first = f(lst)))
		return (NULL);
	curr = first;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = f(lst);
		if (!(curr->next))
		{
			ft_lstclr(first);
			return (NULL);
		}
		curr = curr->next;
	}
	return (first);
}
