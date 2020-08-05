/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:31:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/04 18:10:05 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

//cspdiuxX%
void	eval_input(t_info	*info)
{

	info->format++;
	set_flags(info);
	set_width(info);
	set_precision(info);
	int number;

	number = 0;
	if (*info->format == 'c')
		number = e_char;
	if (*info->format == 's')
		number = e_string;
	if (*info->format == 'p')
		number = e_pointer;
	if (*info->format == 'd' || *info->format == 'i')
		number = e_decimal_int;
	if (*info->format == 'u')
		number = e_u_dec_int;
	if (*info->format == 'x' || *info->format == 'X')
		number = e_u_hex_int;
	if (*info->format == '%')
		number = e_percentage;

	//Dispatch table
	eval_format_specifiers	*format_specifiers_array[e_lenght] = {
		[e_char] = &solve_character,
		[e_string] = &solve_string,
		[e_pointer] = &solve_pointer,
		[e_decimal_int] = &solve_decimal_integer,
		[e_u_dec_int] = &solve_unsigned_decimal_integer,
		[e_u_hex_int] = &solve_unsigned_hexadecimal_integer,
		[e_percentage] = &solve_percent_sign,
	};

	//Use my dispatch table
	format_specifiers_array[number](info);

	//return (info);
}