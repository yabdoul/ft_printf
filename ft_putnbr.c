#include <unistd.h> 
#include "ft_printf.h"
int  ft_putnbr(int nbr)
{
    int count   = 0 ; 
    long n = nbr; 
    if(n < 0)
    {
       count += ft_putchar('-');
        n = -n ; 
        count += ft_putnbr(n);
        return count ;
    }
    if(n <= 9)
    { 
        count += ft_putchar(n + '0');
        return count ; 
    } 
    else{ 
        count += ft_putnbr(n / 10);
        count += ft_putnbr(n % 10);
        return count ; 
    } 
}