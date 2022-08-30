#include "../ft_printf.h"

void  ft_putnbr_base(int nb, char *base)
{
  int nbr;
  long len;

  len = ft_strlen(base);
  nbr = nb;
  if (nbr < 0)
  {
    nbr *= -1;
  }
  if (nbr < len)
  {
    ft_putchar(base[nbr]);
  }
  if (nbr >= len)
  {
    ft_putnbr_base(nbr / len, base);
    ft_putnbr_base(nbr % len, base);
  }
}