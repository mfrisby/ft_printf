#include "libftprintf.h"

char     *remove_min(t_env *e, char *tmp)
{
    int i;
    int y;

    i = 1;
    y = 0;
    if (tmp[0] != '-')
        return (tmp);
    while (tmp[i])
    {
        tmp[y] = tmp[i];
        i++;
        y++;
        tmp[y] = '\0';
    }
    e->neg = 1;
    return (tmp);
}