/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:40 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 11:19:38 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;
	int					len;

	i = 0;
	len = ft_strlen(s);
	if (len == 0)
	{
		result = malloc(sizeof(char) * 1);
		result[i] = '\0';
		return (result);
	}
	else
		result = malloc(sizeof(char) * len);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }

// this function takes a function as a parameter and executes it upon every char inside the string
// the result of each execution is saved inside the result string, which is returned by ft_strmapi
