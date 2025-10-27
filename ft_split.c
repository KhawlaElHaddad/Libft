
#include <stdlib.h>
#include <stdio.h>

int ft_strln(const char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}


int count_words(char const *str, char c)
{
    int i = 0;
    int count = 1;
    while(str[i] == c)
    {
        i++;
    }
    while(str[i])
    {
        if(str[i] == c && str[i + 1] != c && str[i + 1] != '\0') 
        {
            count++;
        }
        i++;
    }
    return (count);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *t = (char*)malloc(sizeof(char) * len + 1);
    if(!t)
    {
        return (NULL);
    }
    while(i < len)
    {
        t[i] = s[start + i];
        i++;
    }
    t[i] = '\0';
    return (t);
}


char **ft_mini_split(char const *s, char c,char **t, int i)
{
    int m = 0;
    int j = 0;
    while(s[i])
    {   
        if(s[i] != c)
        {
            j = 0;
            while(s[i+j] != c && s[i+j] != '\0')
            {
                j++;
            }
            t[m] = ft_substr(s, i , j);
            m++;
            i = i + j - 1;
        }
        i++;
    }
    return (t);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    char **t ;
    if(!s || c == '\0')
    {
        t = NULL;
        return (t);
    }
    int count = count_words(s,c);
    printf("%d\n", count);
    t = (char **)malloc(sizeof(char *) * count + 1);
    t = ft_mini_split(s, c,t,i);
    t[count] = NULL;
    return (t);
    exit(1);
}

int main()
{
//     char str[]= "    khawla         zwina mashallah   ";
//     char c = ' ';
//     int flag;
//     printf("%d\n", count_words(str, c));
    const char *str = "khawla ";
    char **p = ft_split(str, ' ');
    int i = 0;
    
    while(p[i])
    {
        printf("%s\n", p[i]);
        i++;
    }
}

// 't'

// "khawla zwina o fnaaa"


/*
    str[0] = "khawla"
    str[1] = "zwina"
    str[2] = "o"
    str[3] = "fnaaa"
    str[4] = NULL;


*/