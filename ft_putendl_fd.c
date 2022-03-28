/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:29 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:30 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	ft_putchar_fd(char c, int fd) //include as lib later
{
	const void *ptr;

	ptr = &c;
	write (fd, ptr, 1);
}

void	ft_putstr_fd(char *s, int fd) //this as well
{
	int			i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}


void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char *s = "Huhu";
// 	ft_putendl_fd(s, 2);
// 	return (0);
// }
