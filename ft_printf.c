#include "ft_printf.h"
#include "stdio.h"

int ft_printf(const char *format, ...)
{
  int i;
  va_list arg_list;
  va_start(arg_list, count_args((char *)format));
  i = 0;
  while (format[i])
  {
    if (format[i] == '%' && format[i + 1] != '%')
      check_flags((const char)format[++i], va_arg(arg_list, void*));
    else if (format[i] == '%' && format[i + 1] == '%')
      ft_putchar((char)format[i++]);
    else
      ft_putchar((char)format[i]);
    i++;
  }
  va_end(arg_list);
  return (i);
}

int main()
{
  ft_printf("Hello %c", 'x');
  return 0;
}
