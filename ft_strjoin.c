int ft_strln(const char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strcat(char *dest, const char *src)
{
    int i = 0;
    int len=ft_strln(dest);
    while(src[i])
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return(dest);
}

char *ft_strcpy(char *dest, const char *src)
{
    int i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    size_t len1 = ft_strln(s1);
    size_t len2 = ft_strln(s2);
    char *t = malloc(len1 + len2 + 1) ;
    if(!t)
    {
        return (NULL);
    }
    ft_strcpy(t, s1);
    ft_strcat(t, s2);
    return(t);
}
int main()
{
    char const s1[]= "lalla";
    char const s2[]= " Khawla";

    char *p;
    p= ft_strjoin(s1, s2);
    printf("%s\n", p);
}