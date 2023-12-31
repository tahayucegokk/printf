/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:24:52 by muyucego          #+#    #+#             */
/*   Updated: 2024/01/08 22:03:55 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_putchar(char c);
int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putpoint(unsigned long a, int sign);
int		ft_puthex(unsigned long int a, char c);
int		ft_putnbr(long int a);
int		ft_putunsigned(unsigned long int a);

#endif