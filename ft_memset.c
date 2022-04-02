/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:21 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 12:55:49 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	unsigned int	i;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char buffer[2];
//     ft_memset(buffer, 65, 3);
//     printf("%s\n", buffer);
//     memset(buffer, 65, 3);
//     printf("%s\n", buffer);
//     return (0);
// }
