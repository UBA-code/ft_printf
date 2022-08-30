#include "../srcs/ft_printf.h"

void  ft_flag_unsigned_hex_int(int p)
{
  ft_putnbr_base(p, "0123456789abcdef");
}