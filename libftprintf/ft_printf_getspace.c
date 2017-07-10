#include "libftprintf.h"

char		*getspace(t_env *e, char *space)
{
	space = malloc(sizeof(char) * 2);
	if (e->type == 'd' && e->flag_space == 1)
		space[0] = ' ';
	else
		space[0] = '\0';
	space[1] = '\0';
	return (space);
}
