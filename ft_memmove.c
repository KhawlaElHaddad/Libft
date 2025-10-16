// #include <stdio.h>
// void *ft_memmove(void *dest, const void *src, size_t n)
// {
//     size_t i = 0;
//     unsigned char *d= (unsigned char *) dest;
//     unsigned char *s = (unsigned char *) src;
//     while(i < n)
//     {
//         s[i] = d[i];
//         i++;
//     }
//     return (dest);
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[] = "hello"; // Array of size 100
//     char str2[] = "he"; // Array of size 5

//     puts("str1 before memmove ");
//     puts(str1);

//     /* Copies contents of str2 to sr1 */
//     memmove(str1, str2, sizeof(str2));

//     puts("\nstr1 after memmove ");
//     puts(str1);

//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}