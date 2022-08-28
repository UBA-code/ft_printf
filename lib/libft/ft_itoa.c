#include "libft.h"

void  ft_putnbr(int nbr, char *tab, int *i)
{
  if (nbr == -2147483648)
  {
    tab[++*i] = '-';
    tab[++*i] = '2';
    ft_putnbr(147483648, tab, i);
  }
  else if (nbr < 0)
  {
    tab[++*i] = '-';
    ft_putnbr(-nbr, tab, i);
  }
  else if (nbr > 9)
  {
    ft_putnbr(nbr / 10, tab, i);
    ft_putnbr(nbr % 10, tab, i);
  }
  else
    tab[++*i] = nbr + '0';
}

char *ft_itoa(int n)
{
  int i;
  char *tab;

  i = -1;
  tab = malloc(13);
  if (tab == NULL)
    return (NULL);
  ft_putnbr(n, tab, &i);
  tab[++i] = '\0';
  return (tab);
}