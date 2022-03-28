/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:11 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	int		str_len;
	int		i;
	char	*ptr;

	str_len = 0;
	i = 0;
	while (s[str_len] != '\0')
		str_len++;
	ptr = malloc(sizeof(char) * str_len);
	if (ptr == NULL)
		return (ptr);
	while (i < str_len)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char *str = "Huhu";
	printf("%s\n", ft_strdup(str));
	return (0);
}
