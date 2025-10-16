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
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    char *s = (char *) src;
    size_t len_src = ft_strlen(s);
    size_t len_dest = ft_strlen(dst);
    if (size <= len_dest)
    {
        return(size + len_src);
    }
    while(i < size - len_dest - 1 && s[i])
    {
        dst[len_dest + i] = s[i];
        i++;
    }
    dst[len_dest + i] = '\0';
    
    return (len_dest + len_src);
}

#include <string.h>
int main()
{
    char dst[100] = "bonjour ";
    char src[] = "khawla";
    

    size_t len = ft_strlcat(dst, src, sizeof(dst));

    printf("dest : %s\n", dst);
    printf("dest + src: %zu\n", len);
}
