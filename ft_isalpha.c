int ft_isalpha(int c)
{
    if (c > 64 && c < 91 || c > 96 && c < 123)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = '1';
//     printf("%d\n", ft_isalpha(c));
//     return (0);
// }