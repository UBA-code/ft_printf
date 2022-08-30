#include "../srcs/ft_printf.h"

void    ft_flag_int(int nb)
{
    int nbr;

    nbr = nb;
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_flag_int(147483648);
    }
    else if (nbr > 9)
    {
        ft_flag_int((nbr / 10));
        ft_putchar(nbr % 10 + '0');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_flag_int(-nbr);
    }
    else
        ft_putchar(nbr + '0');
}