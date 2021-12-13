/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:33:05 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/08 17:06:26 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num, int *len)
{
	if (num == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return (1);
	}
	if (num < 0)
	{
		ft_putchar ('-', len);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr (num / 10, len);
		ft_putnbr (num % 10, len);
	}
	else
	{
		ft_putchar(num + 48, len);
	}
	return (0);
}
