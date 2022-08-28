#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (format[i])
  {
    if (format[i] == '%')
      check_flags(format[i++], &j);
    else
      ft_putchar(format[i]);
    i++;
  }
  return (i);
}