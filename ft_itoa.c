/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:55 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:58:56 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	digit_count(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int ft_strlen(const char *s) //include from the lib later;
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

char	*rev_str(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}


char	*ft_itoa(int n)
{
	char	*num;
	int		digit;
	int		i;

	num = malloc(sizeof(char) * digit_count(n) + 1);
	if (num == NULL)
		return (NULL);
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		write(1, "-", 1);
		n *= (-1);
	}
	while (n > 0)
	{
		digit = n % 10;
		num[i++] = digit + '0';
		n = n / 10;
	}
	num[i] = '\0';
	rev_str(num);
	return (num);
}

// int main()
// {
// 	int		n = -2147483648;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
