#include "libft.h"

int ft_strlcat(char *dest, char *src, int size)
{
  int i;
  int j;
  int fullLength;
  int destLength;

  destLength = ft_strlen(dest);
  fullLength = ft_strlen(dest) + ft_strlen(src);
  j = 0;
  i = 0;

  while (dest[i])
    i++;
  while (src[j] && j < size - destLength - 1)
  {
    dest[i] = src[j];
    j++;
    i++;
  }
  dest[i] = '\0';
  return (fullLength);
}