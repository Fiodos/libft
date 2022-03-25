
/*
s = "Hey how are you?"
c = " "
return = {"Hey", "how", "are", "you?", NULL pointer}
*/

#include <stdlib.h>
#include <stdio.h>
char    **ft_split(char const *s, char c)
{
    char     **result;
    int             i;
    int             j;

    result = malloc(sizeof(char *));
    result[0] = malloc(sizeof(char) * 2);
    
}

int main()
{
    char *s = "H ey how are you?";
    char **result = malloc(sizeof(char *));
    result = ft_split(s, ' ');
    // char *test = "Hey";
    // char **result;
    // result[0] = test;
    printf("%s\n", result[0]);
    return (0);
}