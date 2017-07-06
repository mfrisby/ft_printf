#include "libftprintf.h"

void    ft_printf_ml(t_env *e, char **tmp)
{
    if (e->m_h == 1)
        ft_printf_ml_h(e, &tmp);
    else if (e->m_hh == 1)
        ft_printf_ml_hh(e, &tmp);
    else if (e->m_l == 1)
        ft_printf_ml_l(e, &tmp);
    else if (e->m_ll == 1)
        ft_printf_ml_ll(e, &tmp);
    else if (e->m_j == 1)
        ft_printf_ml_h(e, &tmp);
    else if (e->m_z == 1)
        ft_printf_ml_h(e, &tmp);
}