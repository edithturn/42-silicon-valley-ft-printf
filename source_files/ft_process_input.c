/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:16:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/19 18:14:06 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

//cspdiuxX%
static t_info *process_converter(t_info *info )
{
	if(*info->format == 'c')
		info = process_character(info);
	else if (*info->format == 's')
		info = process_string(info);
	else if(*info->format == 'p')
		info = pointer_void(info);
	else if((*info->format == 'd' || *info->format == 'i') && info->indicator == 0 )
		info = process_decinal_integer(info);
	else if(*info->format == 'u')
		info = process_unsigned_int(info);
	else if(*info->format == 'x')
		info =	process_unsigned_hex_integer_lowecase(info);
	else if (*info->format == 'X')
		info = process_unsigned_hex_integer_uppercase(info);
	else if (*info->format == '%')
		info = process_percent_sign(info);
	else
		ft_putchar('V');
	

	return (info);
}

t_info	*process_input(t_info	*info)
{
	info->format++;
	info = process_converter(info);
	return (info);
}