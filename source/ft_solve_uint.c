/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:02 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 19:51:10 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_solve_uint(t_info *info)
{
	char  *n;
	n = ft_itoa(va_arg(info->arguments, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}