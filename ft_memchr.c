#include <stdio.h>
size_t occ_c(unsigned char *str, char a)
{
    size_t i = 0;
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
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str = (unsigned char *) s;
    char k = (char) c;
    size_t occ = occ_c(str, k);
    if(occ < n)
    {
        return (&str[occ]);
    }
    return (NULL);
}

int main()
{
    char str[]= "slm khawla";
    char k = 'l';
    char *res = ft_memchr(str, k, 2);
    printf("%s\n", res);
}
