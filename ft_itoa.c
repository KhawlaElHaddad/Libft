#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int temp = 0;
    int len = 0;
    len = ft_strlen(str) - 1;

    while(i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
    }
    return (str);
}


char *ft_itoa(int n)
{
    int sign = 0;
    int count = 0;
    int nbr = n;
    int i = 0;
    char *t ;

    if(nbr < 0)
    {
        nbr *= -1;
        n *= -1;
        sign = 1;
    }
    while(nbr > 9)
    {
        nbr = nbr/10;
        count++;
    }
    t = malloc(sizeof(char) * count + sign + 1);
    if(!t)
    {
        return (NULL);
    }
    if(n == 0)
    {
        t[0]='0';
        t[1] = '\0';
        return(t);
    }
    nbr = 0;
    while (n != 0) {
        nbr = n % 10;
        if (nbr > 9)
        {
            t[i] = (nbr - 10) + 'a';

        }
        else
            t[i] = nbr + '0';
        i++;
        n = n / 10;
    }
    if(sign == 1)
    {
        t[i] = '-';
        i++;
    }
    t[i ] = '\0';
    t = ft_strrev(t);
    return(t);
}


int main()
{
    int n =-544;
    char *t;
    t = ft_itoa(n);
    printf("%s\n", t);
}

