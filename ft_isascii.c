int ft_isascii(int c)
{
    if (c < 128 && c >= 0)
        return (1);
    return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     unsigned char c = 123;
//     printf("\nThe character: %c\n", c);
//     printf("ft_isascii: %d\n", ft_isascii(c));
//     printf("isascii:    %d\n\n", isascii(c));
//     return (0);
// }

