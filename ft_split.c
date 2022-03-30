/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 09:28:43 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
static int	count_elements(char const *s, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != '\0' && s[i] != c)
		{
			len = 0;
			while (s[i] != '\0' && s[i] != c)
			{
				len++;
				i++;
			}
			if (len != 0)
				count++;
		}
		else
			i++;
	}
	return (count);
}

static int	get_element_len(char const *s, char c, int offset)
{
	int	len;

	len = 0;
	while (s[offset] != c && s[offset] != '\0')
	{
		len++;
		offset++;
	}
	return (len);
}

static char	*get_element(char const *s, char *element, char c, int offset)
{
	int	len;
	int	i;

	len = get_element_len(s, c, offset);
	element = malloc(sizeof(char) * len + 1);
	if (element == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		element[i] = s[offset];
		i++;
		offset++;
	}
	element[i] = '\0';
	return (element);
}

static void	init_element(char **result, char *element, int k)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(element);
	result[k] = malloc(sizeof(char) * len + 1);
	if (result[k] == NULL)
		return ;
	while (i < len)
	{
		result[k][i] = element[i];
		i++;
	}
	result[k][i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*element;
	int		i;
	int		k;

	result = malloc(sizeof(char *) * count_elements(s, c) + 1);
	if (result == 0)
		return (0);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			element = get_element(s, element, c, i);
			init_element(result, element, k);
			i = i + ft_strlen(element);
			free(element);
			k++;
		}
		else
			i++;
	}
	result[k] = 0;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char **result = ft_split("tripouille", ' ');
// 	printf("%s\n", result[0]);
// 	return (0);
// }
