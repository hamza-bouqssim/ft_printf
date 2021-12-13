/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_after_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:20:55 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/12 00:21:17 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_after_percentage(char *s, va_list valist, int *len, int i)
{
	if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(valist, int), len);
	if (s[i] == 'c')
		ft_putchar(va_arg(valist, int), len);
	if (s[i] == 'u')
		ft_put_unsigned(va_arg(valist, int), len);
	if (s[i] == 's')
		ft_putstr(va_arg(valist, char *), len);
	if (s[i] == 'x')
		ft_hexa_lower((unsigned int)va_arg(valist, unsigned int), len);
	if (s[i] == 'X')
		ft_hexa_upper(va_arg(valist, unsigned int), len);
	if (s[i] == 'p')
	{
		ft_putstr("0x", len);
		ft_put_pointer(va_arg(valist, unsigned long), len);
	}
	if (s[i] == '%')
		ft_putchar('%', len);
}
