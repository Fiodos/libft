/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:45 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:58:46 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isdigit(int c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = 'b';
//     printf("%d\n", ft_isdigit(c));
//     return (0);
// }
