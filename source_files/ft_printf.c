/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 23:06:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/16 12:08:49 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int ft_printf(const char *format, ...)
{
	t_info	*info;
	int length;

	info = (t_info *)ft_memalloc(sizeof(t_info));
	va_start(info->ap, format);
	info->format = format;
	while(*info->format)
	{
		info->indicator = 0;
		while(*info->format && *info->format != '%')
		{
			ft_putchar(*info->format);
			info->length_int++;
			info->format++;
		}
		if(*info->format && *info->format == '%')
		{
			//printf(" This: %d", va_arg(info->ap, int));
			info = process_input(info);
		}
	}
	va_end(info->ap);
	length = info->length_int;
	free(info);
	return(length);
}