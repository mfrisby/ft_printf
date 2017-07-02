/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:00:13 by mfrisby           #+#    #+#             */
/*   Updated: 2017/05/31 14:07:48 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{

	int ret1 = 0;
	int ret2 = 0;

	ft_putstr("\n test flag\n");
	int tata = -12;
	ft_putstr("printf: ");
	ret1= printf("%10.2d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%10.2d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putstr("printf: ");
	ret1= printf("%30.12o \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%30.12o \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);


	ft_putstr("printf: ");
	ret1= printf("%30.12u \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%30.12u \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);



	/** STRING 
	ft_putstr("STRING\n");
	char *toto = "012345678910";
	ft_putstr("printf: ");
	ret1= printf("%.51s\n", toto);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%.15s\n", toto);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/

	/** CHAR 
	ft_putstr("\nCHAR\n");
	int tutu = 'f';
	ft_putstr("printf: ");
	ret1= printf("%c \n", tutu);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%c \n", tutu);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/

	/** HEXA x 
	ft_putstr("\nx HEXA\n");
	int tata = -12;
	ft_putstr("printf: ");
	ret1= printf("%010.12x \n", tata);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%010.12x \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);

	ft_putstr("printf: ");
	ret1= printf("%.34x \n", tata);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%.34x \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);
**/
	/** HEXA X 
	ft_putstr("\nX HEXA\n");
	int titi = -12;
	ft_putstr("printf: ");
	ret1= printf("%#X \n", titi);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%#X \n", titi);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/

	/**OCTAL 
	ft_putstr("\no (octal non signe)\n");
	unsigned int soso = -12;
	ft_putstr("printf: ");
	ret1= printf("%o \n", soso);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%o \n", soso);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/

	/**POINTEUR 
	ft_putstr("\np POINTEUR\n");
	int susu = -12;
	ft_putstr("printf: ");
	ret1= printf("%p \n", (void*)susu);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%p \n", (void*)susu);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/


	/**INT 
	ft_putstr("\nd (decimal signe)\n");
	int sasa = 21;
	ft_putstr("printf: ");
	ret1= printf("%d \n", sasa);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%d \n", sasa);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/


	/**INT 
	ft_putstr("\n u (chiffre decimal non signe) \n");
	int sasua = -241;
	ft_putstr("printf: ");
	ret1= printf("%u \n", sasua);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%u \n", sasua);
	printf("\nprintf ret = %d -- ft_printf ret = %d\n", ret1, ret2);**/

/** 5000 char **/
/*	char fake[5000];
	int toto = 0;
	while (toto < 4800)
	{
		fake[toto] = 'c';
		toto++;
	}
	fake[4800] = 't';
	int ret = ft_printf("%s", fake);
	ft_putchar('\n');

	int ret2 = printf("%s", fake);

	printf("\nret = %d -- ret2 == %d\n", ret, ret2);
*/
/** main arg **/
/*
	int ret = 0;
	int ret2 = 0;
	if (ac == 2)
	{
		ft_putstr("ft_printf : ");
		ret = ft_printf(av[1]);
		ft_putchar('\n');
		ret2= printf(av[1]);
	}
	else if (ac == 3)
	{
		ft_putstr("ft_printf : ");
		ret  = ft_printf(av[1], av[2]);
		ft_putchar('\n');
		ret2 = printf(av[1], av[2]);
	}
	else if (ac == 4)
	{
		ft_putstr("ft_printf : ");
		ret = ft_printf(av[1], av[2], av[3]);
		ft_putchar('\n');
		ret2 = printf(av[1], av[2], av[3]);
	}
	else
		return (0);
	*/
	return (0);
}