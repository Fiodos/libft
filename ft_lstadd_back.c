/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:08:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 16:15:20 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_node;

	last_node = ft_lstlast(*lst);
	last_node->next = new;
	new->next = NULL;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*head = ft_lstnew("head");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("n3");
// 	t_list	*n4 = ft_lstnew("n4");

// 	head->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	ft_lstadd_back(&head, n4);
// 	printf("%s\n", n3->next->content);
// 	return (0);
// }