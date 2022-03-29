/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 12:06:23 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *str, int c, unsigned int n)
{
    while (n > 0)
    {
        if (*(unsigned char *)str == (unsigned char)c)
            return ((unsigned char *)str);
        str++;
        n--;
    }
    return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "Hello there";
//     char c = 'f';

//     printf("%s\n", ft_memchr(str, c, 15));
// 	printf("%s\n", memchr(str, c, 15));
//     return (0);
// }
