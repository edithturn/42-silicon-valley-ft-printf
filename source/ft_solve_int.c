/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:09:25 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/15 00:37:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_solve_int(t_info *info)
{
	char  *n;
	//char	*str;

	//str = ft_strnew(info->width);
	// Bonus Part [ + ]
	/*if (info->flag[e_plus] == '1')
	{
		while (info->width)
		{
			ft_putchar(' ');
			info->width--;
		}
		ft_putchar('+');
	}*/

	n = ft_itoa(va_arg(info->arguments, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}