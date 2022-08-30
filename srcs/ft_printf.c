#include "ft_printf.h"
//#include "stdio.h"

int ft_printf(const char *format, ...)
{
  int i;
  va_list arg_list;

  va_start(arg_list, format);
  i = 0;
  while (format[i])
  {
    if (format[i] == '%' && format[i + 1] != '%')
      check_flags((const char)format[++i], va_arg(arg_list, void *));
    else if (format[i] == '%' && format[i + 1] == '%')
      write(1, &format[i++], 1);
    else
      write(1, &format[i], 1);
    i++;
  }
  va_end(arg_list);
  return (i);
}
/*
int main()
{
  //char x[] = "Hello World";
  int x = 4294967295;
  ft_printf("%u\n", x);
  ft_printf("%p\n", x);
  ft_printf("%x\n", x);
  ft_printf("%X", x);
  return 0;
}
*/