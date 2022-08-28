#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  char *mem_space;

  if (((mem_space = malloc(nmemb * size)) == NULL) || (size == 0 || nmemb == 0))
    return (NULL);
  ft_bzero(mem_space, nmemb * size);
  return (mem_space);
}