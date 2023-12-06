/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:23:20 by muyucego          #+#    #+#             */
/*   Updated: 2023/12/06 15:30:57 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static	int	ft_digit(long int n)
{
	int	digit;

	digit = 1;
	while (n >= 10)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(long int n)
{
	int		i;
	char	*str;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	i = ft_digit(n) + sign;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	while (i-- > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
