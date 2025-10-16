#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;

    while (s[i])
        i++;
    return(i);
}


#include <stdio.h>
#include <string.h>


int main()
{
    char *str = NULL;
    // printf("%lu\n", ft_strlen(str));
    // printf("%lu\n", strlen(str));
}