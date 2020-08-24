/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:25 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	perc_handle_width(t_info *info)
{
	if (info->width > 1)
	{
		info->total_length = info->total_length + info->width - 1;
		info->width++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
			while (--info->width > 1)
				ft_putchar('0');
		else
			while (--info->width > 1)
				ft_putchar(' ');
	}
}

void	ft_solve_percent(t_info *info)
{
	if (IS_MACOS)
	{
		if (info->flag[e_minus] == '1')
			ft_putchar('%');
		perc_handle_width(info);
		if (info->flag[e_minus] != '1')
			ft_putchar('%');
		info->total_length++;
		info->format++;
	}
	else
	{
		ft_putchar_fd('%', 1);
		info->total_length++;
		info->format++;
	}
}
