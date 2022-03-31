/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 10:32:08 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s)
{
	int		str_len;
	int		i;
	char	*ptr;

	str_len = ft_strlen(s);
	i = 0;
	ptr = malloc(sizeof(char) * str_len);
	if (str_len == 0)
	{
		ptr[i] = s[i];
		return (ptr);
	}
	if (ptr == 0)
		return (ptr);
	while (i < str_len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0'; // this lets me pass the third test case
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *str = (char *)"";
// 	char *test = ft_strdup((char *)"");
// 	printf("%d\n", ft_strlen(str));
// 	printf("%d\n", ft_strlen(test));
// 	printf("%d\n", strcmp(test, ""));
// 	printf("%s\n", test);
// 	return (0);
// }
