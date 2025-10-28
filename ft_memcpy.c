#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *k = (unsigned char *) dest;
    unsigned const char *s = (unsigned char *) src;
    while(i < n)
    {
        k[i] = s[i];
        i++;
    }
    return (dest);
}

#include <string.h>

int main()
{
    char *str="lalla khawla zwin ";
    char src[10] = "hamza zwin";
    ft_memcpy(src, str, sizeof(src));
    printf("%s\n", src);
}