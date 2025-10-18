#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    unsigned char *str1 = (unsigned char *) s1;
    unsigned char *str2 = (unsigned char *) s2;
    while(i < n)
    {
        if(str1[i] < str2[i])
        {
            return(str1[i] - str2[i]);
        }
        else if(str1[i] > str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}
#include <string.h>
int main()
{
    char *s1 = "khawla";
    char *s2 = "khawl";

    printf("%d\n", ft_memcmp(s1,s2,8));
}
