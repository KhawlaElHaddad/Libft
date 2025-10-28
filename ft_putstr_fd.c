#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

#include <stdio.h>
int main()
{
    char str[] = "bonjour khawla lfna !!";
    ft_putstr_fd(str, 1);
}