#include "ft_printf.c"
void ft_tohexa(int c , int type )
{
    char tab[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; 
    char tabmin[] =  {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'} ; 
    char result[65] ; 
    int tmp =  c ; 
    int index  = 0 ; 
    int rem  = 0 ; 
   while(tmp !=0)
    {
        rem = tmp % 16 ; 
        if(type == 1) 
        result[index] = tab[rem];
        else if (type == 2 )
        result[index] = tabmin[rem];
        tmp /= 16;
        index++;
    }
    result[index] = '\0';
    ft_putstr(result) ; 
}