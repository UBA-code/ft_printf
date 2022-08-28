#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1;
    const char *str2;

    str1 = s1;
    str2 = s2;
    if (n == 0)
        return (0);
    while (*str1 == *str2 && n > 0)
    {
        str1++;
        str2++;
        n--;
    }
    return (*str1 - *str2);
}