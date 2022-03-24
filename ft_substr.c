
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*substr;

	i = 0;
	substr = malloc(sizeof(char) * len);
	if (substr == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}

// #include <stdio.h>
// int main()
// {
// 	char *array = "Huhu";
// 	printf("\nresult: %s\n", ft_substr(array, 0, 5253523523524999));
// 	return (0);
// }
