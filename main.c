#include <stdio.h>
#include "libftprintf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <locale.h>

static void WriteFrmtd(char *format, ...)
{
    int fd = open("text2.txt", O_WRONLY|O_CREAT,0640);
    va_list args;
   
/************/
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
/************/
    va_start(args, format);
    vdprintf(fd, format, args);
    va_end(args);
/************/
    va_start(args, format);
    ft_vprintf(format, args);
    va_end(args);
/************/
    va_start(args, format);
    ft_vdprintf(fd, format, args);
    va_end(args);
/************/
    close(fd);
}

int     main()
{
  //  setlocale(LC_ALL, "");
    printf("coucou %lc coucou\n", L'ݗ');
    ft_printf("coucou %lc coucou\n", L'ݗ');
    // int fd = open("text.txt", O_WRONLY|O_CREAT,0640);
    //char *s;
    //s = malloc(sizeof(char) * 100);
    // FILE *f = fopen("text1.txt", "r+");

    //WriteFrmtd("vd printf hello %s %c\n", "world", '!');

  //   printf("printf: hello %s %c\n", "world", '!');
   //  dprintf(fd, "dprintf: hello %s %c\n", "world", '!');
   //  fprintf(f, "fprintf: hello %s %c\n", "world", '!');
    /*******************/
    //  s = malloc(sizeof(char) * 100);
    //  sprintf(s, "hello %s %c\n", "world", '!');
    //  printf("sprintf: %s\n", s);
    // ft_sprintf(s, "hello %s %c\n", "world", '!');
    // printf("fsprint: %s\n", s);
    /*******************/
//     ft_printf("hello %s %c\n", "world", '!');
//     ft_dprintf(fd, "hello %s %c\n", "world", '!');
//     ft_fprintf(f, "hello %s %c\n", "world", '!');

 //    close(fd);
 //    fclose(f);
    return (0);
}
