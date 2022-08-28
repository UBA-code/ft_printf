#include "libft.h"

char *ft_strrchr(char *str, int c)
{
  int i;
  char *txt;
  
  txt = NULL;
  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      txt = str + i;
    i++;
  }
  if (txt == NULL)
    return (NULL);
  return (txt);
}