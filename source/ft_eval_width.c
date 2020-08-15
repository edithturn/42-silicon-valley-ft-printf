/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:57:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/15 01:43:06 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_eval_width(t_info *info)
{
	//clean_width(info);
	info->width = 0;
	//The width is not specified in the format string
	if (*info->format == '*')
	{
		info->width = va_arg(info->arguments, int);
		info->format++;
	}
	if (*info->format >= '0' && *info->format <= '9')
		info->width = ft_atoi(info->format);
	while(*info->format >= '0' && *info ->format <= '9')
			info->format++;
}

void	ft_print_width(t_info *info, int length)
{
	while (info->width != length)
	{
		if (info->flag [e_zero] == '1')
		{
			ft_putchar_fd('0', 1);
			info->total_length++;
		}
		if (info->flag[e_minus] == '1')
		{
			ft_putchar_ft(' ', 1);
			info->total_lenth++;
		}
	}
}

