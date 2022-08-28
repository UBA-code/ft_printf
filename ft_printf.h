#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "lib/libft/libft.h"
#include <stdarg.h>
int ft_printf(const char *format, ...);
void check_flags(char c, void *arg);
int count_args(char *str);
void  ft_flag_char(void *c);
#endif