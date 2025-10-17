#include <string.h>
#include <stdio.h>
int occ_a(int a)
{
    char *str;
    int i = 0;
    while(str[i])
    {
        if(str[i] == a)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

int main()
{
    char *str = "khwla";
    int a = 'a';
    int i= occ_a(a);
    printf("%d\n",i);
}
