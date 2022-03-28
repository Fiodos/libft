/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:01:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:01:11 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_toupper(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "huhu!1";
// 	printf("%s\n", ft_toupper(str));
// 	return (0);
// }
