/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:51:31 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/01 17:08:28 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	f returns a pointer to content;
	so, for every iteration I need to create a new node, and assign the
	return value of f to new_node->content;
	I guess we need to safe the return value of the function f
	directly into an dynamically allocated node ptr, instead of creating
	it like below. And in order to allocate enough memory beforehand, we actually
	need to use the iter func
*/


#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_second_list;
	t_list	*next_second_list;
	t_list	*curr;

	curr = lst;
	while (curr != 0)
	{
		start_second_list = ft_lstnew(f(curr->content));
		if (start_second_list == 0)
			return (0);
		next_second_list = start_second_list->next;
		curr = curr->next;
	}
	return (start_second_list);
}
