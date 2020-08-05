/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:06:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/05 00:22:41 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	solve_pointer(t_info *info)
{
	unsigned	long	long	p;

	p = (unsigned long long)va_arg(info->ap, void *);
	//convert p to hexadecimal
	// Transform each byte from addr in hexadecimal
	ft_putstr("0x");
	//ft_putnchar('0', p);

	info->format++;
}