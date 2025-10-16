#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *str = (unsigned char *) s;
    int i = 0;
    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
    return ;
}
#include <stdio.h>
#include <strings.h> 
int main()
{
    char str[] = "Salam Hmizo";
    ft_bzero(str, 5 * sizeof(char));
    //bzero(str, 5 * sizeof(char));
    printf("%s\n", str);
    return 0;
}

