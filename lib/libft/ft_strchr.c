#include "libft.h"

char *ft_strchr(char *str, int c)
{
  int i;
  char *txt;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
    {
      txt = str + i;
      return (txt);
    }
    i++;
  }
  return (NULL);
}