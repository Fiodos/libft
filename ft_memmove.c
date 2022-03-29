/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 11:57:09 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*buffer;
	unsigned int	i;

	i = 0;
	buffer = 0;
	while (i < n)
    {
        buffer[i] = *((char *)src + i);
		i++;
    }
	i = 0;
    while (i < n)
    {
        *((char *)dest + i) = buffer[i];
        dest++;
        i++;
    }
    return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char dest[] = "Haha";
//     char src[] = "Huhu";
//     //ft_memmove(dest, src, sizeof(char) * 2);
//     memmove(dest, src, sizeof(char) * 2);
//     printf("%s\n", dest);
//     return (0);
// }

// #include <stdio.h>
// int main()
// {
// 	char *buffer;
// 	printf("%s\n", buffer);
// 	return (0);
// }


// key difference between memmove and memcpy is that memmove is safer to use, because it will copy the
// bytes into a buffer first, and into the dest afterwards (so it avoids overlap)
