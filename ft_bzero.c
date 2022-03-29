/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 10:47:53 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        *(unsigned char *)s = '\0';
        s++;
        i++;
    }
}

// #include <stdio.h>
// int main()
// {
//     char *s;
//     ft_bzero(s, 4);
//     printf("%s\n", s);
//     return (0);
// }

//not exactly sure how to properly test this one
