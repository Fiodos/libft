/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:03 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 17:39:20 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return ((char *)str + i);
        i++;
    }
    return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "Hello there";
//     char c = 'f';

//     printf("%s\n", strchr(str, c));
//     return (0);
// }

// I need to figure out if its possible to avoid the compiler warning regarding the const keyword
// but besides that, it seems to work

// --> solution: typecast (char *) for return statement
