int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char string1[] = "1";
// 	char string2[] = "1";

// 	printf("My func: %d\n", ft_strncmp(string2, string1, 0));
// 	printf("Str: %d\n", strncmp(string2, string1, 0));

// 	return (0);
// }