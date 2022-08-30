#include "ft_printf.h"

unsigned int convert_void_unsigned_int(void *arg)
{
  unsigned int *nbr;

  nbr = (unsigned int *)&arg;
  return (*nbr);
}