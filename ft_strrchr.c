
char    *ft_strrchr(const char *str, int c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            j = i;
        i++;
    }
    if (j != 0)
        return (str + j);
    return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "Hello there";
//     char c = 'l';

//     printf("%s\n", ft_strrchr(str, c));
//     return (0);
// }

// this one returns the last occurence of the character