/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:54 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 13:51:01 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if ((str[i] == '\0') && (c == '\0'))
		return ((char *)str + i);
	if (j != -1)
		return ((char *)str + j);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "Hello there";
//     char c = 'l';

//     printf("%s\n", ft_strrchr(str, c));
//     return (0);
// }
