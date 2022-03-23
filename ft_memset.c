#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (i < len)
    {
        *(int *)b = c;
        i++;
        b++;
    }
    return (b);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[2];
    ft_memset(buffer, 65, 3);
    printf("%s\n", buffer);
    memset(buffer, 65, 3);
    printf("%s\n", buffer);
    return (0);
}

//seems to work fine. not exactly sure about the typecast