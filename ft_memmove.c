/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 10:24:53 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (dest == src)
		return (dest);
	if (ptr_src < ptr_dest)
	{
		while (n)
		{
			n--;
			*(ptr_dest + n) = *(ptr_src + n);
		}
		return (dest);
	}
	while (n)
	{
		n--;
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// 	printf("Final: %s\n", sResult);
// 	return (0);
// }
