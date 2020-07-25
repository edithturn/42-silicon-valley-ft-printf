/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:16:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/24 15:47:44 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

//cspdiuxX%
t_info	*eval_input(t_info	*info)
{
	// Eval context
	info->format++;
	//info = set_flags(info);
	
	//  Eval format specifier
	if(*info->format == 'c')
		info = solve_character(info);
	else if (*info->format == 's')
		info = solve_string(info);
	else if(*info->format == 'p')
		info = solve_pointer_void(info);
	else if((*info->format == 'd' || *info->format == 'i') && info->indicator == 0 )
		info = solve_decinal_integer(info);
	else if(*info->format == 'u')
		info = solve_unsigned_int(info);
	else if(*info->format == 'x')
		info =	solve_unsigned_int_lower(info);
	else if (*info->format == 'X')
		info = solve_unsigned_int_upper(info);
	else if (*info->format == '%')
		info = solve_percent_sign(info);
	else
		ft_putchar('V');

	return (info);
}