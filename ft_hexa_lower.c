/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:44:16 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/08 22:02:33 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexa_lower(unsigned long nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar (s[nb], len);
	}
	else
	{
		ft_hexa_lower (nb / 16, len);
		ft_hexa_lower (nb % 16, len);
	}
	return (0);
}
