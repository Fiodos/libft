#include <stdlib.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    while (n > 0)
    {
        *(int *)s = '\0';
        s++;
        n--;
    }
}

#include <stdio.h>
int main()
{
    char *s;
    ft_bzero(s, 4);
    printf("%s\n", s);
    return (0);
}

//not exactly sure how to properly test this one