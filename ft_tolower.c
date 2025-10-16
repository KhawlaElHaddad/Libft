int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    else
        return(c);
}


#include <stdio.h>
int main()
{
    int c = 'D';
    int b = ft_tolower(c);
    printf("%c\n", b);
}