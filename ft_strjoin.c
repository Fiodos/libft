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
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[s1_len] = s2[i];
		i++;
		s1_len++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char *s1 = "Hey ";
	char *s2 = "du";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}


// need a look at it. the ft func is too long (26 lines). I am sure I can handle the concatenation
// in a better way
