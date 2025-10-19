#include <stdio.h>
#include <stdlib.h>
void ft_zilo(void *s, size_t n)
{
    unsigned char *str = (unsigned char *) s;
    int i = 0;
    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
    return ;
}

void *ft_calloc(size_t nmemb, size_t size)
{
    if(nmemb == 0 || size == 0)
        return (NULL);
    if(nmemb * size >  2147483647)
        return (NULL);
    void *mal=(malloc(nmemb * size));
    
    ft_zilo(mal, nmemb * size);
    return (mal);
}

int main()
{
  int *p; /* ptr to array of 100 ints */

  p = ft_calloc (100, sizeof (int));

  if (p == 0)
    printf ("Error allocating array\n");
  else
    printf ("Array address is %p\n", (void *) p);
}
