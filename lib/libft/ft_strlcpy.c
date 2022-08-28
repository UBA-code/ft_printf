#include "libft.h"

int ft_strlcpy(char *dest, char *src, int size)
{
  int i;

  i = 0;
  while (i < size - 1)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (ft_strlen(dest));
}