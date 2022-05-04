/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:20 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/05/04 17:28:34 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	if (size >= SIZE_MAX || count >= SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main()
// {
// 	char *array;
// 	char *test;
// 	array = ft_calloc(52352342414124124, sizeof(int));
// 	test = calloc(52352342414124124, sizeof(int));
// 	printf("%p\n", array);
// 	printf("%p\n", test);
// 	return (0);
// }
