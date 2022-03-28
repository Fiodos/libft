/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:13 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// key difference between memmove and memcpy is that memmove is safer to use, because it will copy the
// bytes into a buffer first, and into the dest afterwards (so it avoids overlap)
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *buffer;
    int     i;

    i = 0;
    while (i < n)
    {
        buffer[i] = *(char *) src;
        i++;
        src++;
    }
    while (n > 0)
    {
        *(char *)dest = *buffer;
        dest++;
        buffer++;
        n--;
    }
    //*(char *)dest = '\0'; the actual memmove does not terminate the dest string
    return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char dest[] = "Haha";
    char src[] = "Huhu";
    //ft_memmove(dest, src, sizeof(char) * 2);
    memmove(dest, src, sizeof(char) * 2);
    printf("%s\n", dest);
    return (0);
}


/*
    Do we need to recreate the behavior when an overflow occurs?
    And why isnt the function working when I declare the dest as a pointer?
*/
