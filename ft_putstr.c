#include "ft_printf.h"
int	ft_putstr(char *s)
{
	if(!s)
		s = "(null)";  
	int count  = 0 ;
	while (*s)
	{
		count  += ft_putchar(*s);
		s++;
	}
	return count  ;
}
