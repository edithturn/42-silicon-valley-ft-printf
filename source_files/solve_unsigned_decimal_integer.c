/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_unsigned_decimal_integer.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:02 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/06 06:08:07 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	solve_unsigned_decimal_integer(t_info *info)
{
	char  *n;
	n = ft_itoa(va_arg(info->ap, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}