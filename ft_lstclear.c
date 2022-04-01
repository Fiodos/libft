/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:31 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/01 16:00:26 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//**lst is the pointer to the header pointer;
#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	curr = (*lst);
	//next = curr->next;
	while (curr->next != 0)
	{
		next = curr->next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	lst = NULL;
}

