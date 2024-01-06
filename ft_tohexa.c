/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:40:34 by yabdoul           #+#    #+#             */
/*   Updated: 2024/01/06 13:01:55 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tohexa(unsigned long c, int type)
{
	int		count;
	char	*tab;
	char	*tabmin;

	tab = "0123456789ABCDEF";
	tabmin = "0123456789abcdef";
	count = 0;
	if (c >= 16)
	{
		count += ft_tohexa(c / 16, type);
		count += ft_tohexa(c % 16, type);
	}
	if (c < 16)
	{
		if (type == 1)
		{
			count += ft_putchar(tab[c]);
		}
		else if (type == 2)
		{
			count += ft_putchar(tabmin[c]);
		}
	}
	return (count);
}
