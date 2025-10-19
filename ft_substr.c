#include <stdio.h>
// size_t ft_strln(char const *str)
// {
//     int i = 0;
//     while (str[i])
//     {
//         i++;
//     }
//     return (i);
// }
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
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


int main()
{
    char s[] = "hello LallaKhawla";
    char *p;
    p = ft_substr(s, 7, 5);
    printf("%s\n", p);
}