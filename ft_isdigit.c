int ft_isdigit(int c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = 'b';
//     printf("%d\n", ft_isdigit(c));
//     return (0);
// }