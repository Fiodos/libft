/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:02:46 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 16:06:53 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	while(lst->next)
		lst++;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*head = ft_lstnew("head");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("n3");

// 	head->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	printf("%p\n", ft_lstlast(head));
// 	printf("%p\n", n3);
// 	return (0);
// }
