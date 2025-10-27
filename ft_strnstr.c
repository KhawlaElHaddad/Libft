#include <stdio.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    char *littlle = (char *) little;
    char *bigg = (char *) big;
    if(!bigg || !little)
        return NULL;
    if(littlle[i] == '\0')
        return(bigg);
    while(i < len && bigg[i])
    {
        j = 0;
        while(bigg[i] && bigg[i + j] && bigg[i + j] == littlle[j])
        {
            j++;
        }
        if(littlle[j] == '\0')
        {
            return(&bigg[i]);
        }
        i++;
    }
    return (NULL);
}

#include <string.h>
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = NULL;
    char *ptr;
    
    ptr = ft_strnstr(largestring, smallstring, 40);
    printf("%s\n", ptr);
}
