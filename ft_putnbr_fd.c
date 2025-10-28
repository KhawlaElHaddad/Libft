#include <unistd.h>


void	ft_putnbr_fd(int n, int fd)
{
    char c = n + '0';
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n < 10)
		write(fd, &c, 1);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

int main()
{
    ft_putnbr_fd(-42, 1);
}