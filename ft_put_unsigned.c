/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:33:26 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/08 12:34:24 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_put_unsigned(unsigned int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + '0', len);
	else
	{
		ft_put_unsigned(nb / 10, len);
		ft_put_unsigned(nb % 10, len);
	}
	return (0);
}
