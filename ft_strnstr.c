#include <stdio.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    
    char *bigg = (char *) big;
    while(i < len && big[i])
    {
    while(little[j])
    {
        j = 0;
        if(big[i] && big[i + j] && big[i]==little[j])
        {
            i++;
        }
        if(little[i] == '\0')
        {
            return(&bigg[i]);
        }
        j++;
    }
    i++;
    }
    return (bigg);
}

#include <string.h>
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;
    
    ptr = ft_strnstr(largestring, smallstring, 40);
    printf("%s\n", ptr);
}
