/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:07 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 18:51:33 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "Source";
//     char dest[7];
//     printf("%s\n", ft_memcpy(dest, src, 7));
//     return (0);
// }
