#ifndef FT_PRINTF_H
#define FT_PRINTF_H


# include <stdint.h>
# include <stdlib.h>
#include <stdio.h> 
# include <unistd.h>
int ft_putchar(char c);
int ft_putnbr(int n);
size_t	ft_strlcat(char *dst, const char *src, size_t size); 
size_t	ft_strlen(const char *s);
int ft_printf(const char *first, ...);
int ft_putstr(char *s);
#endif 