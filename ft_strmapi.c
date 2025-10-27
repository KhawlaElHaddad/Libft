#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

#include <stdio.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *res = (char *)malloc(ft_strlen(s) + 1);
    if(!res)
        return (NULL);
    while(s[i])
    {
        res[i] = f(i, s[i])
        i++;
    }
    res[i] = '\0';
    return(res);
}