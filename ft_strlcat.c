#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_size;
	int src_size;
	int result;
	int	n;

	dst_size = 0;
	src_size = 0;
	n = 0;
	while (dst[dst_size] != '\0')
		dst_size++;
	while (src[src_size] != '\0')
		src_size++;
	result = dst_size + src_size;
	while (src[n] != '\0' && dst_size < (size - 1))
		dst[dst_size++] = src[n++];
	dst[dst_size] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char string1[7] = "Hello ";
// 	char string2[10] = "there!";

// 	char string3[7] = "Hello ";
// 	char string4[10] = "there!";

// 	printf("My func: %lu\n", ft_strlcat(string1, string2, 7));
// 	printf("After ft_strlcat: %s\n", string1);
// 	printf("Str: %5lu\n", strlcat(string3, string4, 7));
// 	printf("After strlcat: %5s\n", string3);

// 	return (0);
// }

//strlcat returns the size of the concatenated string. it stops when the dst buffer is to
// "small" for the string. it always terminates the string (therefore the (size - 1) condition)