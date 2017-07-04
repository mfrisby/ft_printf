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
static void testflags()
{
	int ret1 = 0;
	int ret2 = 0;
	ft_putendl("\nCheck flag\n");

	char *s = "coucou";
	ft_putendl("\ns Conversion");
	ft_putstr("printf: ");
	ret1 = printf("%- 012.5s \n", s);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%- 012.5s \n", s);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nS Conversion");
	ft_putstr("printf: ");
	ret1= printf("%S \n", s);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%S \n", s);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	void *p = s;
	ft_putendl("\np Conversion");
	ft_putstr("printf: ");
	ret1= printf("%-012p \n", p);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%-012p \n",p);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	int tata = -12;
	ft_putendl("\n+012.13d Conversion");
	ft_putstr("printf: ");
	ret1= printf("%d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%+012.13d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	long int li = 12345678;
	ft_putendl("\nD Conversion");
	ft_putstr("printf: ");
	ret1= printf("%D \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%D \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\ni Conversion");
	ft_putstr("printf: ");
	ret1= printf("% 4.12i \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("% 4.12i \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	unsigned int jaja = 4567;
	ft_putendl("\no Conversion");
	ft_putstr("printf: ");
	ret1= printf("%#-+ 12.13o \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%%#-+ 12.13o \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nO Conversion");
	ft_putstr("printf: ");
	ret1= printf("%O \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%O \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nx Conversion");
	ft_putstr("printf: ");
	ret1= printf("%#2.12x \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%#2.12x \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nX Conversion");
	ft_putstr("printf: ");
	ret1= printf("% 10X \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("% 10X \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	char c = 'z';
	ft_putendl("\nc Conversion");
	ft_putstr("printf: ");
	ret1= printf("%+12c \n", c);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%+12c \n", c);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nC Conversion");
	ft_putstr("printf: ");
	ret1= printf("%C \n", c);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%C \n", c);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nu Conversion");
	ft_putstr("printf: ");
	ret1= printf("% 012.13u \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("% 012.13u \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nU Conversion");
	ft_putstr("printf: ");
	ret1= printf("%U \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%U \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);
	
	
}

static void testdflag()
{
	int ret1 = 0;
	int ret2 = 0;
	int tata = 12;

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%-.12d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%-.12d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%-12d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%-12d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%+21.13d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%+21.13d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("% -12.2d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("% -12.2d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%03.12d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%03.12d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%-+05d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%-+05d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

}

static void testconversion()
{
	int ret1 = 0;
	int ret2 = 0;
	ft_putendl("\nCheck Conversion\n");

	char *s = "coucou";
	ft_putendl("\ns Conversion");
	ft_putstr("printf: ");
	ret1= printf("%s \n", s);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%s \n", s);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nS Conversion");
	ft_putstr("printf: ");
	ret1= printf("%S \n", s);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%S \n", s);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	void *p = s;
	ft_putendl("\np Conversion");
	ft_putstr("printf: ");
	ret1= printf("%p \n", p);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%p \n",p);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	int tata = -12;
	ft_putendl("\nd Conversion");
	ft_putstr("printf: ");
	ret1= printf("%d \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%d \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	long int li = 12345678;
	ft_putendl("\nD Conversion");
	ft_putstr("printf: ");
	ret1= printf("%D \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%D \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\ni Conversion");
	ft_putstr("printf: ");
	ret1= printf("%i \n", tata);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%i \n", tata);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	unsigned int jaja = 4567;
	ft_putendl("\no Conversion");
	ft_putstr("printf: ");
	ret1= printf("%o \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%o \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nO Conversion");
	ft_putstr("printf: ");
	ret1= printf("%O \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%O \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nx Conversion");
	ft_putstr("printf: ");
	ret1= printf("%x \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%x \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nX Conversion");
	ft_putstr("printf: ");
	ret1= printf("%X \n", jaja);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%X \n", jaja);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	char c = 'z';
	ft_putendl("\nc Conversion");
	ft_putstr("printf: ");
	ret1= printf("%c \n", c);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%c \n", c);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nC Conversion");
	ft_putstr("printf: ");
	ret1= printf("%C \n", c);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%C \n", c);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nc Conversion");
	ft_putstr("printf: ");
	ret1= printf("%u \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%u \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nC Conversion");
	ft_putstr("printf: ");
	ret1= printf("%U \n", li);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%U \n", li);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);
}

static void othertest()
{
	int ret1 = 0;
	int ret2 = 0;
	ft_putendl("\nC Modulo");
	ft_putstr("printf: ");
	ret1= printf("%% chalom chabbat\n");
	ft_putstr("fprint: ");
	ret2 = ft_printf("%% chalom chabbat\n");
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nC Mulitple saut de ligne");
	ft_putstr("printf: ");
	ret1= printf("%% chalom chabbat \n coucou\n");
	ft_putstr("fprint: ");
	ret2 = ft_printf("%% chalom chabbat \n coucou\n");
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);

	ft_putendl("\nC Mulitple conversions");
	ft_putstr("printf: ");
	ret1= printf("%% %s coucou %c yep %+d %i\n", "ca va ", 12, -12);
	ft_putstr("fprint: ");
	ret2 = ft_printf("%% %s coucou %c yep %+d %i\n", "ca va ", 12, -12);
	printf("printf ret = %d -- fprint ret = %d\n", ret1, ret2);
}

static void testetoile()
{
	printf("printf: %.*d\n", 4,  3);
	ft_printf("fprint: %.*d\n", 4,  3);

	printf("printf: %*d\n", 4,  3);
	ft_printf("fprint: %*d\n", 4,  3);
}

static void testd()
{
	int ret1 = 0;
	int ret2 = 0;

	ft_putendl("\n test flag");
	int tata = -12;
	ft_putstr("printf: ");
	ret1= printf("%10.2d \n", tata);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%10.2d \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);

	ft_putstr("printf: ");
	ret1= printf("%30.12o \n", tata);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%30.12o \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);


	ft_putstr("printf: ");
	ret1= printf("%30.12u \n", tata);
	ft_putstr("ft_printf: ");
	ret2 = ft_printf("%30.12u \n", tata);
	printf("printf ret = %d -- ft_printf ret = %d\n", ret1, ret2);
}
int		main(int ac, char **av)
{
	int ret1 = 0;
	int ret2 = 0;

	ft_printf("fprint: % Zoooo\n");
	printf("printf: % Zoooo\n");

	if (ac == 2 && av[1][0] == '0')
		othertest();
	if (ac == 2 && av[1][0] == '1')
		testconversion();
	if (ac == 2 && av[1][0] == '2')
		testflags();
	if (ac == 2 && av[1][0] == '3')
		testdflag();
	if (ac == 2 && av[1][0] == '4')
		testetoile();
	if (ac == 2 && av[1][0] == '5')
		testd();
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