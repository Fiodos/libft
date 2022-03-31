/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:01:02 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 11:11:54 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (len > (unsigned int)ft_strlen(s))
		substr = malloc(sizeof(char) * ft_strlen(s));
	else if (start >= (unsigned int)ft_strlen(s))
		substr = calloc(ft_strlen(s), sizeof(char));
	else
		substr = malloc(sizeof(char) * len);
	if (substr == 0)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
		return (substr);
	if (len == 0 && start == 0)
		substr[i] = '\0';
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *array = "test";
// 	char *test = ft_substr(array, 4, 2);
// 	printf("\nresult: %s\n\n", test);
// 	printf("%d\n", strcmp("es", test));
// 	return (0);
// }
