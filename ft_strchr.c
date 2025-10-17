#include <stdio.h>
#include <unistd.h>
int occ_c(char *str, int a)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == a)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    char *str = (char *) s;
    int occ = occ_c(str, c);

    if(occ != -1)
    {
        return (&str[occ]);
    }
    return(NULL);
}

#include <string.h>
int main()
{
    char *str = "lala khawxla";
    int c = 'x';
    char *res = ft_strchr(str, c);
    printf("%s\n",res);
}