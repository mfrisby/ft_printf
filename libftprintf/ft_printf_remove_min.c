#include "libftprintf.h"

char     *remove_min(char *tmp)
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