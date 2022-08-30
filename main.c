#include "./srcs/ft_printf.h"
#include <stdio.h> // this is only for compare with the real printf
int main ()
{
    char txt[] = "Hello World !";
    ft_printf("this is addresse of txt : %p\n", txt);
    printf("this is addresse of txt : %p", txt);
    return 0;
}