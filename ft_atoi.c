int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	num;

	i = 0;
	minus_count = 1;
	num = 0;
	while ((str[i] <= '\r' && str[i] >= '\t') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * minus_count);
}

// #include <stdio.h>
// int main()
// {
// 	char array[] = "     --+--+1234ab567";

// 	int atoi = ft_atoi(array);
// 	printf("%d\n", atoi);

// 	return (0);
// }