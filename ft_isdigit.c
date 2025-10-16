int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
    {
        return 1;
    }
    else
        return 0;
}
// #include <stdio.h>


// int main()
// {
//     int c = '0';
//     printf("%d", ft_isdigit(c));
// }
