#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *str1 = (unsigned char *) s1;
    unsigned char *str2 = (unsigned char *) s2;
    size_t i = 0;
    while(str2[i] && i < n)
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
    char *s1 = "kahawla";
    char *s2 = "khawl";

    printf("%d\n", ft_strncmp(s1,s2,8));
}