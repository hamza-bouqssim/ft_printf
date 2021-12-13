/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:44:54 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/08 17:45:27 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexa_upper(unsigned	int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_hexa_upper(nb / 16, len);
		ft_hexa_upper(nb % 16, len);
	}
	return (0);
}
