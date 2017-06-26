#include "libftprintf.h"

void        ft_printf_conversion(char c){
    if (c == 'u')
        ft_printf_u();
    else if (c == 'U')
        ft_printf_umaj();
    else if (c == 's')
        ft_printf_s();
    else if (c == 'S')
        ft_printf_smaj();
    else if (c == 'p')
        ft_printf_p();
    else if (c == 'd' || c == 'i')
        ft_printf_di();
    else if (c == 'D')
        ft_printf_dmaj();
    else if (c == 'o')
        ft_printf_o();
    else if (c == 'O')
        ft_printf_omaj();
    else if (c == 'x' || c == 'X')
        ft_printf_xx();
    else if (c == 'c')
        ft_printf_c();
    else if (c == 'C')
        ft_printf_cmaj();
    else
        return;
}