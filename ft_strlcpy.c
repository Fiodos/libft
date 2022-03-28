/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:27 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:28 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int src_size;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (i < (size - 1) && src[i] != '\0') //(size - 1) bc of null character
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (src_size);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[4];
// 	char src[] = "Hel";

// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dest, src, 4));
// 	printf("strlcpy: %lu\n", strlcpy(dest, src, 4));
// 	printf("%s\n", dest);
// 	return (0);
// }
