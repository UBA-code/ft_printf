#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  unsigned int i;
  char *finalStr;

  i = start;
  finalStr = malloc(sizeof(char) * len + 1);
  if (finalStr == NULL)
    return (NULL);
  ft_strlcpy(finalStr, (char *)s + i, len + 1);
  return (finalStr);
}