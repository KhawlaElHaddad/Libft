#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    int i = 0;
    if(!s)
    {
        write(fd, "\0", 1);
        return ;
    }
    else if(s[i])
    {while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
    }
    
}

#include <stdio.h>
int main()
{
    char str[] = "";
    ft_putendl_fd(str, 1);
}