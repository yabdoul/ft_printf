#include "ft_printf.h"
int ft_tohexa(unsigned long c, int type) {
    char tab[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char tabmin[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    int count =0;

    if (c >= 16) {
         count+=ft_tohexa(c /16, type);
        count+=ft_tohexa(c % 16, type);
    } 
    if (c < 16)
    {
        if (type == 1) {
           count += ft_putchar(tab[c]);
        } else if (type == 2) {
            count+= ft_putchar(tabmin[c]);
        }
    }
    return count;
}
