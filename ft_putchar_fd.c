/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:25 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 14:59:26 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Short summary of FILE DESCRIPTORS

// File descriptors (fd) are indexes of different in-/output (streams) inside a process
// E.g, the standard input is by default fd = 0; the standard output = 1, standard error = 2;
// Now, it is possible to assign files to different fds. This means, if I create a file, and I assign
// the fd = 4 to it, and I use fd inside the write function, the func writes into the file

// Because of the definition of the write func, we need to create a const void ptr first
// in order to be able to "insert" the character into it

#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	const void *ptr;

	ptr = &c;
	write (fd, ptr, 1);
}

// int main()
// {
// 	char c = 'G';
// 	int fd = 2;

// 	ft_putchar_fd(c, fd);
// 	return (0);
// }
