char	*ft_toupper(char *str)
{
	int	str_len;
	int	i;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	i = 0;
	while (str_len > i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
