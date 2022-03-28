/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/28 15:00:00 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
s = "Hey how are you?"
c = " "
return = {"Hey", "how", "are", "you?", NULL pointer}

Algo :
1) scan through the array s;
2) during the scan, safe the occuring characters inside the char pointer elements, and count the occuring chars as well as the amount of "words";
3) when the del is encountered, stop the scan (inscrease "word" count);
4) allocate enough memory to result[0];
5) safe the value of elements into result[0];
6) free up the memory of elements;
7) loop as long as s != '\0';

I need to know the size of the result array BEFOREHAND! In order to allocate enough memory to it!

I need to split up the whole logic in different parts!

First, I need to figure out the size of the result array
Then, figure out the size of the element

*/

#include <stdlib.h>
int get_result_len(char const *s, char c)
{
    int len;
    int i;

    i = 0;
    len = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            len++;
        i++;
    }
    return (len + 2);
}

int ft_strlen(const char *s) //include from the lib later;
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

int get_element_len(char const *s, char c, int offset)
{
    int len;

    len = 0;
    while (s[offset] != c && s[offset] != '\0')
    {
        len++;
        offset++;
    }
    return (len);
}

void *get_element(char const *s, char *element, char c, int offset)
{
    int     len;
    int     i;

    len = get_element_len(s, c, offset);
    element = malloc(sizeof(char) * len + 1);
    if (element == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        element[i] = s[offset];
        i++;
        offset++;
    }
    element[i] = '\0';
    return (element);
}

void    init_element(char **result, char *element, int len, int k)
{
    int i;

    i = 0;
    result[k] = malloc(sizeof(char) * len);
    if (result[k] == NULL)
        return ;
    while (i < len)
    {
        result[k][i] = element[i];
        i++;
    }
}


#include <stdio.h>
char    **ft_split(char const *s, char c)
{
    char    **result;
    char    *element;
    int     len;
    int     i;
    int     k;

    len = get_result_len(s, c);
    result = malloc(sizeof(char *) * len);
    if (result == NULL)
        return (NULL);
    i = 0;
    k = 0;
    while (s[i] != '\0')
    {
        len = get_element_len(s, c, i);
        element = get_element(s, element, c, i);
        init_element(result, element, len, k);
        k++;
        i += len + 1;
        free(element);
        if (i > ft_strlen(s))
            break;
    }
    return (result);
}

int main()
{
    char *s = "HelloCwhatsCup!";
    char c = 'C';
    int i = 0;
    char **result;
    result = ft_split(s, c);
    while (i < 5)
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}
// seems to work!
