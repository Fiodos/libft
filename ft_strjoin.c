#include <stdlib.h>
int ft_strlen(const char *s) // need to include it as a .h later
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	str = malloc(sizeof(char) * (s1_len + s2_len));
	if (str == NULL)
		return (NULL);
	while (i < (s1_len + s2_len))
	{
		while (i < s1_len)
		{
			str[i++] = *s1;
			s1++;
		}
		str[i++] = *s2;
		s2++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "Hey ";
// 	char *s2 = "there!";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }
