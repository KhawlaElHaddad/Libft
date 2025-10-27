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
#include <stdlib.h>
char *ft_itoa(int n)
 {
    int count = 0;
    int nbr = n;
    while(nbr > 9)
    {
        nbr = n/10;
        count++;
    }
    char *s = malloc(sizeof(char) * count);
     int i, sign;
     if ((sign = n) < 0) 
         n = -n;          
     i = 0;
    s[i++] = n % 10 + '0'; 
    while ((n /= 10) > 0)    
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     
     return (ft_strrev(s));
 }
 #include <stdio.h>
 int main()
{
    int n =-545;
    char *t;
    t = ft_itoa(n);
    printf("%s\n", t);
}