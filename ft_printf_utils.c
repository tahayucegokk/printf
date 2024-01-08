/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:34:21 by muyucego          #+#    #+#             */
/*   Updated: 2023/12/05 00:34:21 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	tmp;
	int	len;

	len = 0;
	if (str == NULL)
	{
		tmp = ft_putstr("(null)");
		if (tmp == -1)
			return (tmp);
		return (6);
	}
	while (*str)
	{
		tmp = ft_putchar(*str++);
		if (tmp == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_putnbr(long int a)
{
	int	tmp;

	tmp = 0;
	if (a == 0)
		return (write(1, "0", 1));
	if (a == -2147483648)
		return (write(1, "-2147483648", 11));
	if (a < 0)
	{
		tmp += write(1, "-", 1);
		a *= -1;
	}
	if (a >= 10)
		tmp += ft_putnbr(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (tmp + 1);
}

int	ft_puthex(unsigned long int a, char c)
{
	int	total;
	int	tmp;

	total = 0;
	if (a >= 16)
	{
		tmp = ft_puthex(a / 16, c);
		if (tmp < 0)
			return (-1);
		total += tmp;
	}
	if (c == 'X')
		tmp = write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		tmp = write(1, &"0123456789abcdef"[a % 16], 1);
	if (tmp < 0)
		return (-1);
	return (total + 1);
}

int	ft_putpoint(unsigned long a, int sign)
{
	int	total;
	int	tmp;

	total = 0;
	if (sign == 1)
	{
		if ((write(1, "0x", 2)) == -1)
			return (-1);
		total += 2;
		sign = 0;
	}
	if (a >= 16)
	{
		tmp = ft_putpoint(a / 16, 0);
		if (tmp < 0)
			return (-1);
		total += tmp;
	}
	tmp = write(1, &"0123456789abcdef"[a % 16], 1);
	if (tmp < 0)
		return (-1);
	return (total + 1);
}

int	ft_putunsigned(unsigned long int a)
{
	return (ft_putnbr(a));
}
