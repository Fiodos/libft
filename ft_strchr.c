/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:03 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 13:52:37 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c) //why does it need to be unsigned char?
			return ((char *)str + i);
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "Hello there";
//     char c = 'e';

//     printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
//     return (0);
// }
