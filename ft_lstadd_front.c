/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:25:34 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 17:22:14 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	void	*tmp;

	tmp = new->next; //the pointer is pointing to the location of new->next (n3);
	new->next = *lst; //assign the value of new->next to be the address of lst (the header);
	(*lst)->next = tmp; //assign header->next to point to tmp (n3);
}
// *new is described as: "The address of a pointer to the node to be added to the list"

#include <stdio.h>
int main()
{
	t_list	*head = ft_lstnew("head");
	t_list	*n2 = ft_lstnew("n2");
	t_list	*n3 = ft_lstnew("n3");

	head->next = n2;
	n2->next = n3;
	n3->next = NULL;

	ft_lstadd_front(&head, n2);
	printf("%s\n", n2->next->content);
	printf("%s\n", head->next->content);
	return (0);
}
