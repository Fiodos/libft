/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:14 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:15 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	f(unsigned int i, char *c)
{
	*c += 1;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>
int main()
{
	char str[] = "abc";
	ft_striteri(str, *f);
	printf("%s\n", str);
	return (0);
}

//seems to work. this one works similar to strmapi, with the difference that it actually manipulates
//the string itself