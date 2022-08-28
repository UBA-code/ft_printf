#include "ft_printf.h"

void check_flags(char c, int *j)
{
  if (c == '%')
    ft_flag_mod();
  else if (c == 'c')
    ft_flag_char();
  else if (c == 's')
    ft_flag_string();
  else if (c == 'p')
    ft_flag_pointer();
  else if (c == 'd' || c == 'i')
    ft_flag_int();
  else if (c == 'u')
    ft_flag_unsigned_int();
  else if (c == 'x')
    ft_flag_unsigned_hex_int();
  else if (c == 'X')
    ft_flag_unsigned_hex_int_upper();
}