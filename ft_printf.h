/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:31:03 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/16 14:38:32 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
int				ft_decimal_u(int n);
int				ft_hexa_nocase(int n);
int				ft_hexa_case(int n);
int				ft_pointer(unsigned long n);
unsigned int	ft_parser01(const char *format, int index, va_list parameters);
unsigned int	ft_parser02(const char *format, int index, va_list parameters);
int				ft_parser03(const char *format, int index, va_list parameters);

typedef struct s_printf
{
	va_list	parameters;
}				t_printf;

#endif