int ft_atoi(const char *nptr)
{
    int i = 0;
    int sum = 0;
    int sign = 1;
    char *str = (char *) nptr;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <='9')
    {
        sum = sum * 10 + (str[i] - 48);
        i++;
    }
    return (sum * sign);

}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = "123456";
    int n = ft_atoi(str);
  printf("The string %s as an integer is = %d\n",str,n);
 
  char *str2 = "314hello";
  n = ft_atoi(str2);
  printf("The string %s as an integer is = %d\n",str2,n);
}