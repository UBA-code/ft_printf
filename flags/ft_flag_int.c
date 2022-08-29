#include "../ft_printf.h"

void    ft_flag_int(void *nb)
{
    int nbr;

    nbr = convert_void_int(nb);
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_flag_int((void *)(147483648));
    }
    else if (nbr > 9)
    {
        ft_flag_int((void*)(nbr / 10));
        ft_putchar(nbr % 10 + '0');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_flag_int((void *)-nbr);
    }
    else
        ft_putchar(nbr + '0');
}