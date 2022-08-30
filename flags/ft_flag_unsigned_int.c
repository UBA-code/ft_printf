#include "../ft_printf.h"

void ft_flag_unsigned_int(unsigned int nb)
{
  if (nb > 9)
  {
    ft_flag_unsigned_int((nb / 10));
    ft_putchar(nb % 10 + '0');
  }
  else if (nb < 0)
  {
    ft_putchar('-');
    ft_flag_unsigned_int(-nb);
  }
  else
    ft_putchar(nb + '0');
}