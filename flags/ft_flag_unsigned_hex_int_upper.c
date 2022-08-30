#include "../ft_printf.h"

void  ft_flag_unsigned_hex_int_upper(int p)
{
  ft_putnbr_base(p, "0123456789ABCDEF");
}