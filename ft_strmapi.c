/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:40 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:41 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *s) // include as libft later
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	unsigned int	i;
// 	char			*result;

// 	i = 0;
// 	if (s == NULL || f == NULL)
// 		return (NULL);
// 	result = malloc(strlen(s));
// 	strcpy(result, s);
// 	while (result[i])
// 	{
// 		result[i] = (*f)(i, result[i]);
// 		i++;
// 	}
// 	return (result);
// }


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;
	int					len;

	len = ft_strlen(s);
	result = malloc(sizeof(char) * len);
	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }

// this function takes a function as a parameter and executes it upon every char inside the string
// the result of each execution is saved inside the result string, which is returned by ft_strmapi
