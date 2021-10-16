/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_u.c                                  :+:      :+:    	:+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:59:08 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/06 09:20:47 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_u(int n)
{
	long long	conv;
	long long	nb;
	int			count;

	conv = 4294967296;
	nb = n;
	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		nb = conv - nb;
	}
	if (nb > 9)
		count = ft_decimal_u(nb / 10);
	ft_putchar((nb % 10) + 48);
	count++;
	return (count);
}
