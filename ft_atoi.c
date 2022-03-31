/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:04 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 10:14:38 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus_count;
	int	num;

	i = 0;
	minus_count = 1;
	num = 0;
	while ((nptr[i] == '\r' || nptr[i] == '\t') || nptr[i] == ' ' ||
			nptr[i] == '\f' || nptr[i] == '\v' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '-')
	{
		minus_count *= (-1);
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		num = (nptr[i] - '0') + (num * 10);
		i++;
	}
	return (num * minus_count);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char array[] = "  -1234f34ab567";

// 	int result = atoi(array);
// 	int my_result = ft_atoi(array);
// 	printf("atoi:    %d\n", result);
// 	printf("ft_atoi: %d\n", my_result);
// 	return (0);
// }
