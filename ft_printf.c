/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:55:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/11 22:05:45 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ptr;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			ft_after_percentage((char *)s, ptr, &len, i);
			if (len == -1)
				return (-1);
		}
		else
			ft_putchar (s[i], &len);
		i++;
	}
	va_end(ptr);
	return (len);
}
