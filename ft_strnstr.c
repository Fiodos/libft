#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
		j = 0;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello again";
// 	char str2[] = "l";

// 	printf("strnstr: %12s\n", strnstr(str, str2, 3));
// 	printf("ft_strnstr: %s", ft_strnstr(str, str2, 3));

// 	return (0);
// }

// this works as intended, the onnly thing that needs to be adressed is the compiler warning regarding the const keyword