#include <stdio.h>
size_t ft_strln(const char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
#include <stdlib.h>
char *ft_strdup(const char *s)
{
    int i = 0;
    if(!s)
        return (NULL);
    char *t = (char*)malloc(sizeof(char) * ft_strln(s) + 1);
    if(!t)
    {
        return (NULL);
    }
    while (s[i])
    {
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
    return(t);
    
}
#include <string.h>

int main()
{
    char *source = "KHawla ra2i3a jidan wa jamila";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source); 

    printf("%s", target);
    free(target);
    return 0;
}