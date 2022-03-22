int ft_isalnum(int c)
{
    if (c > 64 && c < 91 || c > 96 && c < 123)
        return (1);
    else if (c > 47 && c < 58)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = '!';
//     printf("%d\n", ft_isalnum(c));
//     return (0);
// }