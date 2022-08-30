#include "../ft_printf.h"

void check_flags(char c, void *arg)
{
  if (c == 'c')
    ft_flag_char(arg);

  else if (c == 's')
    ft_flag_string(arg);
  else if (c == 'd' || c == 'i')
    ft_flag_int(convert_void_int(arg));
  else if (c == 'p')
    ft_flag_pointer(convert_void_int(arg));
  else if (c == 'x')
    ft_flag_unsigned_hex_int(convert_void_int(arg));
  else if (c == 'X')
    ft_flag_unsigned_hex_int_upper(convert_void_int(arg));
  else if (c == 'u')
    ft_flag_unsigned_int(convert_void_unsigned_int(arg));
}