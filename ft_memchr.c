/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:00 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
void    *ft_memchr(const void *str, int c, size_t n)
{
    while (*(char *)str != '\0' && n > 0)
    {
        if (*(char *)str == c)
            return (str);
        str++;
        n--;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Hello there";
    char c = 'f';

    printf("%s\n", ft_memchr(str, c, 3));
    return (0);
}

// also need to check out a warning here.
// warning: returning 'const void *' from a function with result type 'void *' discards qualifiers
