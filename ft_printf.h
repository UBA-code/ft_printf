#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "./lib/libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
int ft_printf(const char *format, ...);
void check_flags(char c, void *arg);
int count_args(char *str);
void ft_flag_char(void *c);
void ft_flag_string(void *str);
void ft_flag_int(int nb);
void ft_flag_pointer(int p);
void ft_flag_unsigned_hex_int(int p);
void ft_flag_unsigned_hex_int_upper(int p);
void ft_flag_unsigned_int(unsigned int nb);

/* converting functions*/

int convert_void_int(void *nbr);
unsigned int convert_void_unsigned_int(void *arg);
void ft_putnbr_base(int nb, char *base);

#endif