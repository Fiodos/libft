/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:15:48 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 11:24:37 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	result->content = content;
	result->next = NULL;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1;
// 	n1 = ft_lstnew("Huhu");
// 	printf("%p\n", n1->next);
// 	return (0);
// }
