#include <stdlib.h>

int ft_strln(const char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

/* 

    int ft_existed(char *str, char c)
    {
        int i = 0;
        while(str[i])
        {
            if(str[i] == c)
                return (0);
            i++;
        }
        return (1);
    }


    while(exsited(Str[i]) == 0)
    {
        i++;
    }
    j = ft_strlen(str) - 1;
    while(j >= 0 && existed(str[j]) == 0)
    {
        j--;
    }
    char *t = ft_substr(str, i, j-i);

*/
#include <stdio.h>

int ft_existed(char c, const char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return (0);
        i++;
    }
    return (1);
}
char *ft_substir(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *t = (char*)malloc(sizeof(char) * len + 1);
    if(!t)
    {
        return (NULL);
    }
    while(i < len)
    {
        t[i] = s[start + i];
        i++;
    }
    t[i] = '\0';
    return (t);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t j = ft_strln(s1) - 1;

    while(ft_existed(s1[i], set) == 0)
    {
        i++;
    }
    while(j >= 0 && ft_existed(s1[j], set) == 0)
    {
        j--;
    }
    char *t = ft_substir(s1, i , j - i + 1);
    return (t);
}


int main()
{
    printf("%s\n", ft_strtrim("hmizo  hmizo", "hmizo "));
}

// str = "khawla fniwna khawla"

// set = "alwahk"