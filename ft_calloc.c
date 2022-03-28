/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:20 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:58:21 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// memory allocated by calloc is initialized to zero
// returns NULL when sufficient memory is not available in the heap
// else returns the address to the first memory block (ptr)

#include <stdlib.h>
void	*ft_calloc(size_t nelem, size_t elsize)
{
	int				i;
	unsigned char 	*ptr;

	i = 0;
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (ptr);
	while (i < nelem)
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
// 	int i = 0;
// 	array = ft_calloc(52352342414124124, sizeof(int));
// 	test = calloc(52352342414124124, sizeof(int));
// 	printf("%p\n", array);
// 	printf("%p\n", test);
// 	return (0);
// }
