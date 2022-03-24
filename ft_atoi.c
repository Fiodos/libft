int	ft_atoi(const char *str)
{
	int	i;
	int	minus_count;
	int	num;

	i = 0;
	minus_count = 1;
	num = 0;
	while ((str[i] == '\r' || str[i] == '\t') || str[i] == ' ' ||
			str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		minus_count *= (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * minus_count);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char array[] = "  -1234f34ab567";

// 	int result = atoi(array);
// 	int my_result = ft_atoi(array);
// 	printf("atoi:    %d\n", result);
// 	printf("ft_atoi: %d\n", my_result);
// 	return (0);
// }
