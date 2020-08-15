/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_context.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 14:39:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 19:45:30 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_flags(t_info *info)
{
	clean_flags(info);
	while(*info->format == '-' || *info->format == '0' || *info->format == '.'  || *info->format == '*')
	{
		if(*info->format == '-')
			info->flag[e_minus] = '1';
		else if(*info->format == '+')
			info->flag[e_plus] = '1';
		else if(*info->format == ' ')
			info->flag[e_space] = '1';
		else if(*info->format == '#')
			info->flag[e_hash] = '1';
		else if (*info->format == '0')
			info->flag[e_zero] = '1';
		else
			write(1, "Error", 6);
		info->format++;
		}
	
}

void	set_width(t_info *info)
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

void	set_precision(t_info *info)
{
	info->precision = 0;
	info->point = 0;
	if(*info->format == '.')
	{
		info->point = 1;
		info->format++;
	}
	// Evaluating *
	if (*info->format == '*')
	{
		info->precision = va_arg(info->arguments, int);
		info->format++;
	}
	// Converting to number the pointer of numbers
	if(*info->format >= '0' && *info->format<='9')
		info->precision = ft_atoi(info->format);
	// passing all numbers
	while(*info->format >= '0' && *info->format<= '9')
		info->format++;
}
