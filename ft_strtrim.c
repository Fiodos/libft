/*
s1 = "Huhu Hi Huhu";
set = "Huhu";
trimmed string = " Hi ";
*/

#include <stdlib.h>
int ft_strlen(const char *s) //include it as .h later
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

int trim_start(char const *s1, char const *set)
{
    int str_len;
    int set_len;
    int i;
    int j;

    str_len = ft_strlen(s1);
    set_len = ft_strlen(set);
    i = 0;
    j = 0;
    while (i < str_len)
    {
        while (s1[i] == set[j])
        {
            i++;
            j++;
        }
        if (j == set_len)
            return (i);
        j = 0;
        i++;
    }
    return (i);
}

int trim_end(char const *s1, char const *set)
{
    int str_len;
    int set_len;
    int i;
    int j;

    str_len = ft_strlen(s1);
    set_len = ft_strlen(set);
    i = str_len - 1;
    j = set_len - 1;
    while (i >= 0)
    {
        while (s1[i] == set[j])
        {
            i--;
            j--;
        }
        if (j == -1)
            return (i);
        j = set_len - 1;
        i++;
    }
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    int     start;
    int     end;
    int     i;
    
    start = trim_start(s1, set);
    end = trim_end(s1, set);
    i = 0;
    result = malloc(sizeof(char) * (end - start + 2));
    if (result == NULL)
        return (NULL);
    while (start <= end)
    {
        result[i] = s1[start];
        i++;
        start++;
    }
    result[i] = '\0';
    return (result);
}

// #include <stdio.h>
// int main()
// {
//     char *s1 = "Huhu Hi uhuH";
//     char *set = "H";
//     char *result = ft_strtrim(s1, set);
//     printf("%s\n", result);
//     return (0);
// }
// not exactly sure if it should work THIS way, but seems good to me