#include "libft.h"

char *ft_strnstr(char *haystack, char *needle, int len)
{
  int i;

  i = 0;
  if (needle[0] == '\0')
    return (haystack);
  while (haystack[i])
  {
    if (haystack[i] == needle[0])
    {
      if (len > ft_strlen(needle)) return (haystack + i);
      if (ft_strncmp(haystack + i, needle, len) == 0)
        return (haystack + i);
    }
    i++;
  }
  return (NULL);
}