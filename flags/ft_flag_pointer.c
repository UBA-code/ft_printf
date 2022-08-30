#include "../srcs/ft_printf.h"

void  ft_flag_pointer(int p)
{
  //ft_putstr("0x");
  ft_putnbr_base(p, "0123456789abcdef");
}


// this function need fixing