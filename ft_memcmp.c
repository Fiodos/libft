
#include <stdlib.h>
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;
    int j;

    while (*(char *)str1 != '\0' && i < n)
    {
        str1++;
        i++;
    }
    while (*(char *)str2 != '\0' && j < n)
    {
        str2++;
        j++;
    }
    return (i - j);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "abcd";
    char *str2 = "ABCD";

    int ret = ft_memcmp(str1, str2, 4);
    printf("%d\n", ret);
    if(ret > 0)
      printf("str2 is less than str1");
    else if(ret < 0)
      printf("str1 is less than str2");
    else 
      printf("str1 is equal to str2");
    return (0);
}
// this is not the right implementation
// it should compare the ascii values, instead of comparing the length!