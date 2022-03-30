/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 17:17:37 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_mem(char const *s1, char const *set) // counting how many elements will be in the result string
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		second_count;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	result = malloc(sizeof(char) * count_mem(s1, set) + 1);
	while (s1[i])
	{
		second_count = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				second_count++;
			j++;
		}
		if (second_count == 0)
			result[k++] = s1[i];
		i++;
	}
	result[k] = '\0';
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = ft_strtrim("tripouille   xxx", " x");
// 	printf("%s\n", s);
// 	return (0);
// }
