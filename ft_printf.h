/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:40:28 by yabdoul           #+#    #+#             */
/*   Updated: 2024/01/06 12:49:58 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *first, ...);
int		ft_putstr(char *s);
int		ft_tohexa(unsigned long c, int type);
int		ft_unsigned(unsigned int nbr);

#endif