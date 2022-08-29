#include "ft_printf.h"
//#include "stdio.h"

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
      write(1, &format[i++], 1);
    else
      write(1, &format[i], 1);
    i++;
  }
  va_end(arg_list);
  return (i);
}

int main()
{
  unsigned int x = 10;
  ft_printf("Hello Everyone, %d\n", x);
  return 0;
}
