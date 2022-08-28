#include "libft.h"

void skip(char *str, int *signs, int *minus, int *nb)
{
  int i;

  i = 0;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
  while (str[i] == 43 || str[i] == 45)
  {
    if (str[i] == '-')
      ++*minus;
    ++*signs;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    *nb *= 10;
    *nb += str[i] - '0';
    i++;
  }
}

int ft_atoi(const char *nptr)
{
  int minus;
  int signs;
  int nb;

  nb = 0;
  signs = 0;
  minus = 0;
  skip((char *)nptr, &signs, &minus, &nb);
  if (signs > 1)
    return (0);
  if (minus % 2 == 0)
    return (nb);
  else
    return (-nb);
}