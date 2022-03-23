char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < nb)
	{
		dest[i++] = src[n++];
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char string1[1] = "2";
// 	char string2[10] = "2";

// 	char string3[1] = "2";
// 	char string4[10] = "2";

// 	printf("My func: %s\n", ft_strncat(string1, string2, 0));
// 	printf("Str: %s\n", strncat(string3, string4, 0));

// 	return (0);
// }