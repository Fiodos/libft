/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:02 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/29 12:20:42 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	int result;

	result = 0;
	while (n > 0)
	{
	if (*(unsigned char *)str1 != *(unsigned char *)str2)
		return (*(unsigned char *)str1 - *(unsigned char *)str2);
	result = *(unsigned char *)str1 - *(unsigned char *)str2;
	str1++;
	str2++;
	n--;
	}
	return (result);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str1 = "Hallo";
//     char *str2 = "H";

//     int ret = memcmp(str1, str2, 1);
//     printf("%d\n", ret);
//     printf("memcmp: ");
//     if(ret > 0)
//       printf("   str2 is less than str1");
//     else if(ret < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");

//     printf("\n");

//     int ret2 = ft_memcmp(str1, str2, 1);
//     printf("%d\n", ret2);
//     printf("ft_memcmp: ");
//     if(ret2 > 0)
//       printf("str2 is less than str1");
//     else if(ret2 < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");
//     return (0);
// }
