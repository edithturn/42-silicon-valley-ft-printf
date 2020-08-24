/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 23:06:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:55:54 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_info		*info;
	int			length;

	info = (t_info *)ft_memalloc(sizeof(t_info));
	va_start(info->arguments, format);
	info->format = format;
	while (*info->format)
	{
		while (*info->format && *info->format != '%')
		{
			ft_putchar(*info->format);
			info->total_length++;
			info->format++;
		}
		if (*info->format && *info->format == '%')
			ft_eval_input(info);
	}
	va_end(info->arguments);
	length = info->total_length;
	free(info);
	return (length);
}
