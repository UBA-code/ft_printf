#include "../srcs/ft_printf.h"

void  ft_flag_char(void *c)
{
  write(1, &c, 1);
}