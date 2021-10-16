/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:17:41 by bifrah            #+#    #+#             */
/*   Updated: 2021/10/16 14:44:30 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long n)
{
	unsigned long	nb;
	int				count;

	nb = n;
	count = 1;
	if (nb > 15)
		count += ft_pointer(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 87);
	return (count);
}
