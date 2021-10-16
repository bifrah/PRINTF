/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:38:12 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/16 14:44:20 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

unsigned int	ft_parser01(const char *format, int index, va_list parameters)
{
	char	c;
	char	*s;
	int		i;
	int		count;

	count = 0;
	if (format[index] == '%')
		count = ft_putchar('%');
	if (format[index] == 'c')
	{
		c = va_arg(parameters, int);
		count = ft_putchar(c);
	}
	if (format[index] == 's')
	{
		s = va_arg(parameters, char *);
		count = ft_putstr(s);
	}
	if (format[index] == 'i' || format[index] == 'd')
	{
		i = va_arg(parameters, int);
		count = ft_putnbr(i);
	}
	return (count);
}

unsigned int	ft_parser02(const char *format, int index, va_list parameters)
{
	unsigned int	u;
	int				count;

	count = 0;
	if ((format[index] == 'u')
		|| (format[index] == 'x') || (format[index] == 'X'))
	{
		u = va_arg(parameters, unsigned int);
		if (format[index] == 'u')
			count = ft_decimal_u(u);
		if (format[index] == 'x')
			count = ft_hexa_nocase(u);
		if (format[index] == 'X')
			count = ft_hexa_case(u);
	}
	return (count);
}

int	ft_parser03(const char *format, int index, va_list parameters)
{
	unsigned long	p;
	int				count;

	count = 0;
	if (format[index] == 'p')
	{
		p = (unsigned long)va_arg(parameters, void *);
		if (format[index] == 'p')
		{
			ft_putstr("0x");
			count = 2 + ft_pointer(p);
		}
	}
	return (count);
}
