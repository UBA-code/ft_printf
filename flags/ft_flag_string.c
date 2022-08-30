#include "../srcs/ft_printf.h"


void    ft_flag_string(void *str)
{
    char *s = str;
    write(1, s, ft_strlen(str));
}