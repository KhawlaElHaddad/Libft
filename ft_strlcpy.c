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
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    char *s = (char *) src;
    size_t len_src = ft_strlen(s);
    if (size != 0)
    {
    while(i < size - 1 && s[i])
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    }
    return (len_src);
}


#include <string.h>

int main(void)
{
    char src[] = "bonjour";
    char dest[5];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("dest: %s\n", dest);
    printf("length of src: %zu\n", len); 
}
