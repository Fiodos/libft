int ft_isprint(int c)
{
    if (c > 31 && c < 127)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = '\n';
//     printf("%d\n", ft_isprint(c));
//     return (0);
// }