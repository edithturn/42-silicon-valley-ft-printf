/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 19:50:44 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_solve_hex(t_info *info)
{
	// aplicar contexto
	char  *n;
	n = ft_itoa(va_arg(info->arguments, long long));

	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}