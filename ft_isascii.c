int ft_isascii(int c)
{
    if (c < 128 && c >= 0)
        return (1);
    return (0);
}

#include <stdio.h>
int main()
{
    char c = '§';
    printf("%d\n", c);
    return (0);
}

// take a look at it later