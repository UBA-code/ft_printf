#include "ft_printf.h"

int count_args(char *str)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str[i])
  {
    if (str[i] == '%' && str[i + 1] != '%' && str[i + 1] != ' ')
    {
      j++;
      i++;
    }
    i++;
  }
  return (j);
}

// Not Nedded Yet