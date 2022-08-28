#include "libft.h"

void ft_putchar(char *str)
{
  write(1, str, ft_strlen(str));
}