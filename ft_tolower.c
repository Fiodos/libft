/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:01:06 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:01:07 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_tolower(char *str)
{
	int	str_len;
	int	i;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	i = 0;
	while (str_len > i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "HUHU";
// 	printf("%s\n", ft_tolower(str));
// 	return (0);
// }
