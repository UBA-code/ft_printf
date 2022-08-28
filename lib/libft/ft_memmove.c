#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
  char *de;
  const char *sr;
  size_t i;

  i = 0;
  de = dest;
  sr = src;
  while (i < n)
  {
    de[i] = sr[i];
    i++;
  }
  return (de);
}
