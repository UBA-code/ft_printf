#include "ft_printf.h"

int convert_void_int(void *nbr)
{
  int *nb;

  nb = (int*)&nbr;
  return (*nb);
}