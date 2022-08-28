#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  char *dest_add;
  char *src_add;
  size_t i;

  i = 0;
  dest_add = dest;
  src_add = (char*)src;
  while (i < n)
  {
    dest_add[i] = src_add[i];
    i++;
  }
  return (dest_add);
}