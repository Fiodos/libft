/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:51:31 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 10:52:39 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1)f creates node by calling f on curr->content;
	2)returned pointer to node must be stored somewhere;
	3)curr = curr->next in order to access the next node;
	4)call f on that node;
	5)return node + store it (link it);

	Maybe create the first node, and then append all following nodes to it using lstaddback?
*/
#include "libft.h"
// #include <stdio.h>
// void	*f(void *ptr)
// {
// 	if (*(char *)ptr == 'm')
// 		return (ft_lstnew("new n1"));
// 	if (*(char *)ptr == 'n')
// 		return (ft_lstnew("new n2"));
// 	if (*(char *)ptr == 'o')
// 		return (ft_lstnew("new n3"));
// 	return (0);
// }

void	del(void *ptr)
{
	ptr = 0;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start; //beginning of the second list;
	t_list	*second_list;
	t_list	*curr;


	curr = lst; // first element of the first list;
	second_list = f(curr->content); // first element of the second list;
	start = second_list;
	curr = curr->next; // second element of the first list;
	while (curr != 0)
	{
		second_list->next = f(curr->content);
		second_list = second_list->next; //second_list is the next element;
		curr = curr->next;
	}
	//curr->next = 0;
	return (start);
}

// int main()
// {
// 	t_list	*n1 = ft_lstnew("m1");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("o3");
// 	// void	*head;

// 	// head = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = 0;

// 	// t_list	*test = f(n1->content);
// 	// printf("%s\n", test->content);
// 	// test->next = f(n2->content);
// 	// printf("%s\n", test->next->content);

// 	t_list	*result = ft_lstmap(n1, f, del);
// 	printf("%d\n", ft_lstsize(result));
// 	return (0);
// }
