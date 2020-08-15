/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 23:06:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 20:08:18 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//cspdiuxX%
int ft_printf(const char *format, ...)
{
	//Declaring variables
	t_info	*info;
	int length;

	//Initializing my variables
	info = (t_info *)ft_memalloc(sizeof(t_info));

	va_start(info->arguments, format);
	info->format = format;
	while(*info->format)
	{
		//info->indicator = 0;
		while(*info->format && *info->format != '%')
		{
			ft_putchar(*info->format);
			//info->length_int++;
			info->format++;
		}
		if(*info->format && *info->format == '%')
		{
			//printf(" This: %d", va_arg(info->ap, int));
			ft_eval_input(info);
		}
	}
	va_end(info->arguments);
	length = info->length_int;
	free(info);
	return(length);
}