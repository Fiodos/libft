
char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Hello there";
    char c = 'f';

    printf("%s\n", strchr(str, c));
    return (0);
}

// I need to figure out if its possible to avoid the compiler warning regarding the const keyword
// but besides that, it seems to work