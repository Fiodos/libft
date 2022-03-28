/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:21 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:22 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (i < len)
    {
        *(int *)b = c;
        i++;
        b++;
    }
    return (b);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[2];
    ft_memset(buffer, 65, 3);
    printf("%s\n", buffer);
    memset(buffer, 65, 3);
    printf("%s\n", buffer);
    return (0);
}

//seems to work fine. not exactly sure about the typecast
