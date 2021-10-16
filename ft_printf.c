/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:58:57 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/11 16:04:29 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	parameters;
	int		index;
	int		count;
	int		percent;

	va_start (parameters, format);
	index = 0;
	count = 0;
	percent = 0;
	while (format[index] != '\0')
	{
		if (format[index] != '%')
			index += ft_putchar(format[index]);
		if (format[index] == '%')
		{
			percent += 1;
			index++;
			count += ft_parser01(format, index, parameters);
			count += ft_parser02(format, index, parameters);
			count += ft_parser03(format, index, parameters);
			index++;
		}
	}
	va_end(parameters);
	return (count + index - (2 * percent));
}
