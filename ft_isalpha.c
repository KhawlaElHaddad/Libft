int ft_isalpha(int c)
{
    if((c >= 65 && c <= 90) || 
    (c >= 97 && c <= 122))
    {
        return 1;
    }
    else
        return 0;
}


// #include <stdio.h>


// int main()
// {
//     int c = '5';
//     printf("%d", ft_isalpha(c));
// }