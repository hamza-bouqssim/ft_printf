/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:40:32 by hbouqssi          #+#    #+#             */
/*   Updated: 2021/12/12 00:30:58 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_putchar(char c, int *len);
int				ft_putnbr(int n, int *len);
void			ft_putstr(char *s, int *len);
void			ft_after_percentage(char *s, va_list valist, int *len, int i);
int				ft_printf(const char *s, ...);
unsigned int	ft_hexa_upper(unsigned int nb, int *len);
unsigned int	ft_hexa_lower(unsigned long nb, int *len);
unsigned long	ft_put_pointer(unsigned long nb, int *len);
unsigned int	ft_put_unsigned(unsigned int nb, int *len);
#endif
