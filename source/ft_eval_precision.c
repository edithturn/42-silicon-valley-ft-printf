/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:05:15 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:55:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_eval_precision(t_info *info)
{
	info->precision = 0;
	info->point = 0;
	if (*info->format == '.')
	{
		info->point = 1;
		info->format++;
		if (*info->format == '*')
		{
			info->precision = va_arg(info->arguments, int);
			if (info->precision < 0)
			{
				info->precision = 0;
				info->point = 0;
			}
			info->format++;
		}
		if (*info->format >= '0' && *info->format <= '9')
			info->precision = ft_atoi(info->format);
		while (*info->format >= '0' && *info->format <= '9')
			info->format++;
		if (info->precision > 0)
			info->point = 2;
	}
}
