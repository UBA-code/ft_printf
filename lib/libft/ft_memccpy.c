#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  size_t i;
  char *dest_add;
  char *src_add;

  dest_add = dest;
  src_add = (char *)src;
  i = 0;
  while (i < n)
  {
    dest_add[i] = src_add[i];
    if (src_add[i] == (unsigned char)c)
      break;
    i++;
  }
  if (dest_add[i] != c)
    return (NULL);
  dest_add[++i] = '\0';
  return (dest_add + (i));
}