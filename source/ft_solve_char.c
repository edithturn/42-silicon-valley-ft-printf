/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:05:50 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/15 19:40:03 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_solve_char(t_info *info)
{
	char	c;

	c = va_arg(info->arguments, int);

	if (info->flag[e_minus] == '1')
		ft_putchar(c);

	// If weidth
	if (info->width > 1)
	{
		if (info->flag [e_zero] == '1' )
			while (info->width > 1)
			{
				ft_putchar('0');
				info->width--;
			}
		else
			while(info->width > 1)
			{
				ft_putchar(' ');
				info->width--;
			}
	}

	if (info->flag[e_minus] != '1')
		ft_putchar(c);
	info->total_length++; 
	info->format++;
}
