/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:07 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:08 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    while (n > 0)
    {
        *(char *)dest = *(char *)src;
        dest++;
        src++;
        n--;
    }
    *(char *)dest = '\0';
    return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "Source";
//     char dest[7];
//     ft_memcpy(dest, src, 5);
//     printf("%s\n", dest);
//     return (0);
// }

// seems to work as well
