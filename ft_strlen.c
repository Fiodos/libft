/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:35 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:36 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *s = "Huhu";
//     printf("%d\n", ft_strlen(s));
//     printf("%lu\n", strlen(s));
//     return (0);
// }
