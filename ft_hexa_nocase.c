/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_nocase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:59:18 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/11 14:52:30 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_nocase(int n)
{
	long long	conv;
	long long	nb;
	int			count;

	conv = 4294967296;
	nb = n;
	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		nb = conv - nb;
	}
	if (nb > 15)
		count += ft_hexa_nocase(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 87);
	return (count);
}
