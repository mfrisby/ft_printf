#include "libftprintf.h"

char	*ft_itoabase_o(unsigned int n)
{
	char	*s;
	int		div;
	size_t	i;

	i = 0;
	div = 1;
	s = ft_strnew(20);
	if (n < 0)
	{
		n *= -1;
		s[i++] = '-';
	}
	while ((n / div) > 7 && ++i)
		div *= 8;
	while (n > 7)
	{
		s[i--] = n % 8 + '0';
		n /= 8;
	}
	if (n >= 0)
		s[i] = n + '0';
	return (s);
}

static char     *remove_min(char *tmp)
{
    int i;
    int y;

    i = 1;
    y = 0;
    while (tmp[i])
    {
        tmp[y] = tmp[i];
        i++;
        y++;
        tmp[y] = '\0';
    }
    return (tmp);
}

static void     checkfield(t_env *e, char *tmp)
{
    int i;
    int j;
    int y;

    i = ft_strlen(tmp);
    j = e->field_width - i;
    y =(e->neg == 1) ? i - 1 : i;
    if (e->field_width > 0 && e->precision == 0)
    {
        if (i >= e->field_width)
            return;
        while (j > 0)
        {
            ft_printf_add_to_buffer(e, " ", 0);
            j--;
        }
    }
    if (e->precision < e->field_width)
        e->flag_zero = 0;
    if (i >= e->field_width && e->field_width <= e->precision)
        return;
    while (i < (e->field_width - (e->precision - y)))
    {
        if (e->flag_zero)
            ft_printf_add_to_buffer(e, "0", 0);
        else
            ft_printf_add_to_buffer(e, " ", 0);
        i++;
    }
}

static void     checkdiesezeroflag(t_env *e, char *tmp)
{
    int i;
    int y;

    i = ft_strlen(tmp);
    y = i;
    if (e->flag_diese == 1 && ft_strcmp("0", tmp) != 0 && 
        ft_strcmp("-0", tmp) != 0 && ft_strcmp("+0", tmp) != 0)
    {
        ft_printf_add_to_buffer(e, "0x", 0);
    }

    while (y < e->precision)
    {
        ft_printf_add_to_buffer(e, "0", 0);
        y++;
    }
}

void    ft_printf_o(t_env *e)
{
    char *tmp;
    char *tmp2;

    unsigned int octal = va_arg(e->pa, unsigned int);
    tmp = ft_itoabase_o(octal);
    if (tmp[0] == '-')
    {
        e->neg = 1;
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        ft_printf_add_to_buffer(e, "-", 0);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        e->neg = 0;
        return;
    }
    else
    {
        checkfield(e, tmp);
        checkdiesezeroflag(e, tmp);
        ft_printf_add_to_buffer(e, tmp, 0);
        return;
    }
    ft_printf_add_to_buffer(e, tmp, 0);
}