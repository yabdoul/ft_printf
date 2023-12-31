#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int handle_format(const char *s, va_list p )
{
  int i = 0;
  int count = 0 ; 
  while (s[i])
  {
    if (s[i] == '%')
    {
      if (s[i + 1] == '%')
      {
       count  += ft_putchar('%');
        i = i + 2;
      }
      else if (s[i + 1] == 'd')
      {
        count  += ft_putnbr(va_arg(p, int));
        i = i + 2;
      }
      else if (s[i + 1] == 'c')
      {
        count  += ft_putchar(va_arg(p, int));
        i = i + 2;
      }
      else if (s[i + 1] == 's')
      {
        count  += ft_putstr(va_arg(p, char *));
        i = i + 2;
      }
    }
    else
    {
      count += ft_putchar(s[i]);
      i++;
    }
  }
  return count ;
}

int ft_printf(const char *first, ...)
{
  va_list p;
  va_start(p, first);
  int printed_chars = handle_format(first, p);
  
  va_end(p);

  return printed_chars;
}