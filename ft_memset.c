#include <stdio.h>
void *memset(void *s, int c, size_t n)
{
    int i = 0;
    
    char k = (char) c;
    unsigned char *str = (unsigned char *)s;
    while(i < n)
    {
        str[i] = k[i];
        i++;
    }
    return(s);
}

#include <string.h>

int main()
{
    char str[] = "khawla zwina bzzf";
    memset(str, '.', 5 * sizeof(char));
    printf("%s\n", str);
}