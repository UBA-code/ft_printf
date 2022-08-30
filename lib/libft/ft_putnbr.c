#include "../ft_printf.h"

void    ft_putnbr(int nb)
{
    int nbr;

    nbr = nb;
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nbr > 9)
    {
        ft_putnbr((nbr / 10));
        ft_putchar(nbr % 10 + '0');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else
        ft_putchar(nbr + '0');
}