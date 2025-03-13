/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:08:16 by marvin            #+#    #+#             */
/*   Updated: 2024/12/11 14:08:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int n)
{
	char		*hex_base;
	int			i;
	char		hex[16];
	int			count;

	hex_base = "0123456789abcdef";
	i = 0;
	count = 0;
	if (n == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	while (n > 0)
	{
		hex[i++] = hex_base[n % 16];
		n = n / 16;
	}
	while (--i >= 0)
		count += ft_putchar(hex[i]);
	return (count);
}
