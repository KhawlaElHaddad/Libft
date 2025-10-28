#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d= (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    unsigned char *t;
    if(!d && !s)
        return NULL;
    if(d < s)
    {
        while(i < n)
        {
            s[i] = t[i];
            i++;
        }
    }
    else if(d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}
#include <stdio.h>
#include <string.h>
//ibm.com
#define SIZE    21
 
char target[SIZE] = "a shiny white sphere";
 
int main( void )
{
  char * p = target + 8;  /* p points at the starting character
                          of the word we want to replace */
  char * source = target + 2; /* start of "shiny" */
 
  printf( "Before memmove, target is \"%s\"\n", target );
  ft_memmove( p, source, 5 );
  printf( "After memmove, target becomes \"%s\"\n", target );
}