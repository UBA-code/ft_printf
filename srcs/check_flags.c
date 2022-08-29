#include "../ft_printf.h"

void check_flags(char c, void *arg)
{
  if (c == 'c')
    ft_flag_char(arg);
  
  else if (c == 's')
    ft_flag_string(arg);
  else if (c == 'd' || c == 'i')
    ft_flag_int(arg);
  /*else if (c == 'p')
    ft_flag_pointer();
  else if (c == 'u')
    ft_flag_unsigned_int();
  else if (c == 'x')
    ft_flag_unsigned_hex_int();
  else if (c == 'X')
    ft_flag_unsigned_hex_int_upper();
    */
}