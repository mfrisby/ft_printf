/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 12:57:44 by mfrisby           #+#    #+#             */
/*   Updated: 2016/08/11 15:20:48 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf_precision(t_env *e, char *format)
{
    int start;

    if (format[e->i] != '.')
        return -1;
    e->i++;
    if (format[e->i] == '*')//precision dans arg
    {
        e->precision_in_arg = 1;
        return (-1);
    }
    start = e->i;
    while (format[e->i] && format[e->i] >= '1' && format[e->i] <= '9')
    {
        e->i++;
    }
    if (start < e->i)
    {
        e->precision = ft_atoi(ft_strsub(format, start, e->i - start));
        return (0);
    }
    return (-1);
}
