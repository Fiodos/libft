/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:46 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 17:13:21 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst->next == 0)
		return (0);
	while (lst->next)
	{
		lst++;
		i++;
	}
	return (i);
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

// 	printf("%d\n", ft_lstsize(head));
// 	return (0);
// }
