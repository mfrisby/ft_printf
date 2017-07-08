#include "libftprintf.h"

static char  *getprecision(t_env *e, char *s)
{
    int len;
    char *tmp;
    int i;

    i = 0;
    len = ft_strlen(s);
    tmp = NULL;
    if (e->precision >= 0 && (e->type == 's' || e->type == 'S'))
    {
        if (e->precision < ft_strlen(s))
            s = ft_strsub(s, 0, e->precision);
        return (s);
    }
    else if (e->type == 'c' || e->type == 'C')
        return (s);
    else
    {
        if (e->precision > len)
        {
            tmp = ft_strnew(e->precision - len);
            while (i < e->precision - len)
            {
                tmp[i] = '0';
                i++;
            }
            s = ft_strjoin(tmp, s);
        }
    }
    return (s);
}

static char *flagcompar(t_env *e, char *s)
{
    if (e->type == 'c' && ft_strcmp(s, "") == 0)
        e->field_width-=1;
    if (e->type == 'c')
        e->precision = -1;
    if ((e->flag_moins == 1 || e->precision >= 0) && e->flag_zero == 1)
        e->flag_zero = 0;//min annule zero
    if (e->flag_plus == 1 && e->neg == 1)
        e->flag_plus = 0;
    if (e->flag_plus == 1 && e->flag_space == 1)
        e->flag_space = 0;
    if (e->neg == 1 && e->flag_space == 1)
        e->flag_space = 0;
    if (e->flag_space == 1)
        e->field_width -= 1;
    return (s);
}

static char *getfield(t_env *e, char *s, char *field, char *dp)
{
    char c;
    int len;
    int i;

    i = 0;
    len = ft_strlen(s) + ft_strlen(dp);
    c = e->flag_zero == 1 ? '0' : ' ';
    if (e->field_width > len)
    {
        field = ft_strnew(e->field_width - len);
        while (i < e->field_width - len)
        {
            field[i] = c;
            i++;
        }
    }
    if (field == NULL)
        return ("");
    return (field);
}

static char *getdp(t_env *e, char *dp, char *s)
{
    dp = malloc(sizeof(char) * 3);
    if ((e->flag_diese == 1 && (e->type == 'x' || e->type == 'X') && s[0] != '0') || e->type == 'p')
    {
        dp[0] = '0';
        dp[1] = e->type == 'x' || e->type == 'p' ? 'x' : 'X';
        dp[2] = '\0';
    }
    else if (e->flag_diese == 1 && e->type == 'o' && s[0] != '0')
    {
        dp[0] = '0';
        dp[1] = '\0';
    }
    else if (e->type == 'd' || e->type == 'i' || e->type == 'o')
    {
        dp[0] = e->neg == 0 && e->flag_plus == 1 ? '+' : e->neg == 1 ? '-' : '\0';
        dp[1] = '\0';
    }
    else
        dp[0] = '\0';
    return (dp);
}

static char *getspace(t_env *e, char *space)
{
    space = malloc(sizeof(char) * 2);
    if (e->type == 'd' && e->flag_space == 1)
        space[0] = ' ';
    else
        space[0] = '\0';
    space[1] = '\0';
    return (space);
}
void        ft_printf_putflags(t_env *e, char *s)
{
    char *field;
    char *dp;
    char *space;

    field = NULL;
    flagcompar(e, s);
    space = getspace(e, space);
    s = getprecision(e, s);
    dp = getdp(e, dp, s);
    field = getfield(e, s, field, dp);
    if (e->flag_moins == 1)
    {
        s = ft_strjoin(s, field);
        s = ft_strjoin(dp, s);
        s = ft_strjoin(space, s);
    }
    else if (ft_strlen(field) == 0 || field[0] == '0')
    {
        s = ft_strjoin(field, s);
        s = ft_strjoin(dp, s);
        s = ft_strjoin(space, s);
    }
    else
    {
        s = ft_strjoin(dp, s);
        s = ft_strjoin(field, s);
        s = ft_strjoin(space, s);
    }
    ft_printf_add_to_buffer(e, s, 0);
}