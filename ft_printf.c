#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int handle_format(const char *s, va_list p )
{
  int i = 0;
  int count = 0 ; 

      if (s[i + 1] == '%')
       count  += ft_putchar('%');
   else if (s[i + 1] == 'd')
        count  += ft_putnbr(va_arg(p, int));
      else if (s[i + 1] == 'c')
        count  += ft_putchar(va_arg(p, int));
      else if (s[i + 1] == 's')
        count  += ft_putstr(va_arg(p, char *));
      else if(s[i+ 1 ] == 'X' )
         count  += ft_tohexa(va_arg(p, unsigned int) , 1);
       else if(s[i+ 1 ] == 'x' )
         count  += ft_tohexa(va_arg(p, unsigned int) , 2);
       else if (s[i + 1] == 'i')
        count  += ft_putnbr(va_arg(p, int));
       else if(s[i+ 1 ] == 'p' )
      {
        count += ft_putstr("0x");
        count  += ft_tohexa(va_arg(p, unsigned long) , 2);
      } 
        else if (s[i + 1] == 'u')
        count  += ft_unsigned(va_arg(p, unsigned int));
  return count ;
    }

int ft_printf(const char *first, ...)
{
  va_list p;
  int  i = 0 ;
  int printed_chars = 0;
  va_start(p, first);
  while (first[i])
  {
    if (first[i] == '%')
    {
     printed_chars += handle_format(first+i, p);
      i = i + 2;
    }
     else
          printed_chars +=  ft_putchar(first[i++]);
  }
  va_end(p);
  return printed_chars;
}