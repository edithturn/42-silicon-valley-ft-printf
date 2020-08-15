/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:09:25 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/15 02:07:32 by epuclla          ###   ########.fr       */
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

	// TODO: Should show ERROR
	if (info->flag[e_zero] == '1' && info->flag[e_minus]  == '1' )
		return ;
	/*else
	{
		strlen = ft_strlen(tmp);
		while (info->width > strlen)
		{
			ft_putchar(' ');
			info->width--;
		}
		ft_putstr(tmp);
	}*/

	n = ft_itoa(va_arg(info->arguments, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
}