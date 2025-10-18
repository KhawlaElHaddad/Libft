#include <stdio.h>
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

char *ft_strrev(char *str)
{
    int i = 0;
    int temp = 0;
    int len = 0;
    len = ft_strlen(str) - 1;

    while(i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
    }
    return (str);
}

int occ_c(char *str, int a)
{
    int i = 0;
    char *rev = ft_strrev(str);
    while(rev[i])
    {
        if(rev[i] == a)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

char *ft_strrchr(const char *s, int c)
{
    // int i;
    char *str = (char *) s;
    int occ = occ_c(str, c);
    char *rev = ft_strrev(str);

    if(occ != -1)
    {
        return (&rev[ft_strlen(rev) - occ - 1]);
    }
    return(NULL);
}

#include <string.h>
int main()
{
    char str[] = "lala khawxlami";
    int c = 'a';
    char *res = ft_strrchr(str, c);
    printf("%s\n",res);
}