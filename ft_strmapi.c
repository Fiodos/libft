#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc(strlen(s));
	strcpy(result, s);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}

// take a closer look at it
