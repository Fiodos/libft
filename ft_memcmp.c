
#include <stdlib.h>
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
  while (n > 0)
  {
    if (*(char *)str1 != *(char *)str2)
      return (*(char *)str1 - *(char *)str2);
    str1++;
    str2++;
    n--;
  }
  return (*(char *)str1 - *(char *)str2);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str1 = " ";
//     char *str2 = "";

//     int ret = memcmp(str1, str2, 2);
//     printf("%d\n", ret);
//     printf("memcmp: ");
//     if(ret > 0)
//       printf("   str2 is less than str1");
//     else if(ret < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");

//     printf("\n");

//     int ret2 = ft_memcmp(str1, str2, 2);
//     printf("%d\n", ret2);
//     printf("ft_memcmp: ");
//     if(ret2 > 0)
//       printf("str2 is less than str1");
//     else if(ret2 < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");
//     return (0);
// }
