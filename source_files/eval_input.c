/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:16:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/28 23:16:31 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

//cspdiuxX%
t_info	*eval_input(t_info	*info)
{

	//t_info	new_info;
	// Eval context
	info->format++;
	info = set_flags(info);
	info = set_width(info);
	info = set_precision(info);
	int number;

	//  Eval format specifier
	//convert to inst to my info->format
	if (*info->format == 'c')
		number = e_char;
	if (*info->format == 's')
		number = e_char;
	
	eval_format_specifiers	*format_specifiers_array[e_lenght] = {
		[e_char] = &solve_character,
		[e_string] = &solve_string,
		[e_decimal_int] = &solve_decinal_integer,
		[e_pointer_void] = &solve_pointer_void,
		[e_decimal_int] = &solve_decinal_integer,
		[e_u_int] = &solve_unsigned_int,
		[e_u_int_lower] = &solve_unsigned_int_lower,
		[e_u_int_upper] = &solve_unsigned_int_upper,
		[e_percent_sign] = &solve_percent_sign,
	};

	info = format_specifiers_array[number](info);

	return (info);
}