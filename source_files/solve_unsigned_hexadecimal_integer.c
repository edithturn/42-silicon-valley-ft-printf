/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_unsigned_hexadecimal_integer.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/05 00:22:58 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	solve_unsigned_hexadecimal_integer(t_info *info)
{
	// aplicar contexto
	char  *n;
	n = ft_itoa(va_arg(info->ap, long long));

	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}