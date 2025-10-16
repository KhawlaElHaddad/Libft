int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    else
        return(c);
}

#include <stdio.h>
int main()
{
    int c = 'D';
    int b = ft_toupper(c);
    printf("%c\n", b);
}