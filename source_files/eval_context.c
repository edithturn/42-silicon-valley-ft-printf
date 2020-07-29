/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_context.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 14:39:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/27 15:32:22 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

t_info	*set_flags(t_info *info)
{
	clean_flags(info);
	while(*info->format == '-' || *info->format == '+' || *info->format == ' ' || *info->format == '#' || *info->format == '0')
	{

		if(*info->format == '-')
			info->flag[e_minus] = '1';
		if(*info->format == '+')
			info->flag[e_plus] = '1';
		if(*info->format == ' ')
			info->flag[e_space] = '1';
		if(*info->format == '#')
			info->flag[e_hash] = '1';
		if (*info->format == '0')
			info->flag[e_zero] = '1';
		*info->format++;
		}
		return (info);
}

t_info	*set_width(t_info *info)
{
	//clean_width(info);
	info->width = 0;
	//The width is not specified in the format string
	if (*info->format == '*')
	{
		info->width = va_arg(info->ap, int);
		info->format++;
	}
	while(*info->format >= '0' && *info ->format <= '9')
	{
		if (*info->format >= '0' && *info->format <= '9')
			info->width = ft_atoi(info->format);
		info->format++;
	}	
	return (info);
}

t_info *set_precision(t_info *info)
{
	info->precision = 0;
	info->point = 0;
	if(*info->format == '.')
	{
		info->point = 1;
		info->format++;
	}
	if(*info->format >= '0' && *info->format<='9')
		info->precision = ft_atoi(info->format);
	while(*info->format >= '0' && *info->format<= '9')
		info->format++;
	return (info);
}

/*t_info *set_length(t_info *info)
{
	
}*/

