/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:02:55 by mfrisby           #+#    #+#             */
/*   Updated: 2017/05/25 14:11:31 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_printf_options(char *format, t_env *e)
{
	if (format[e->i] == '%' && format[e->i + 1])
	{
		if (format [e->i + 1] == '-' || format[e->i + 1] == '+' 
				|| format[e->i + 1] == ' ' || format[e->i + 1] == '0' 
				|| format[e->i + 1] == '#')
			ft_putendl("flags");
		if (ft_isdigit(format [e->i + 1]) == 1 || format[e->i + 1] == '*')
			e->result = ft_printf_width(format, e->result, &e->i);
		if (format[e->i + 1] == '.')//precision
		{
			//seems OK
			if (format[e->i + 2] && format[e->i + 2] == '*')
			{
				e->nb_arg++;
				e->i += 2;
				//chaine = nbr de char a afficher
				//nbr = precision comme dhab
			}
			else if (format[e->i + 2] && ft_isdigit(format[e->i + 2]) == 1)
			{
				e->precision = ft_printf_precision(&e->i, format);
				//e->i modifie par pointeur
			}
			else //juste le point 
				e->i++;
			//d, i, o, u, x   DO NOTHING
			//e, E, f BONUS
		}
	}
}

static int ft_printf_exeption(char *format, t_env *e)
{
	//seems ok
	if (format[e->i] == '%' && !format[e->i + 1])
	{
		ft_putendl("Error : incomplete format specifier");
		return (-1);//end function
	}
	else if (format[e->i] != '%')
	{
		while (format[e->i] != '\0' && format[e->i] != '%')
		{
			ft_putchar(format[e->i]);
			e->size++;
			e->i++;
		}
	}
	else if (format[e->i] == '%' && format[e->i + 1] && format[e->i + 1] == '%')
	{
		e->size++;
		ft_putchar('%');//join to result
		e->i++;
	}
	return (0);//continue
}

int			ft_printf(const char *restrict format, ...)
{
	t_env		e;
	va_list		pa;

	e.i = 0;
	e.size = 0;
	e.result = NULL;
	e.nb_arg = 0;
	e.precision = 0;
	va_start(pa, format);
	while (format[e.i] != '\0')
	{
		if (ft_printf_exeption((char*)format, &e) == -1)
			return (-1);//ok
		if (format[e.i] == '%')
		{
			ft_printf_options((char*)format, &e);
		}
		e.i++;
	}
	va_end(pa);
	return (e.size);
}
