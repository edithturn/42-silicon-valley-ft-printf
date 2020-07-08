/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_conversors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:19:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/08 12:15:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* cspdiuxX% */

/* Use structure tu save the data */

int ft_find_conversion(const char *format)
{
	format = format + 1;
	
	t_conversors  *convertor;
	
	if (*format == 'c')
		convertor->s_single_character = e_single_character;
	else if (*format == 's')
			convertor->s_string_characters = e_string_characters;
	else if (*format == 'p')
			convertor->s_pointer = e_pointer;
	else if (*format == 'd')
			convertor->s_decimal = e_decimal;
	else if (*format == 'i')
			convertor->s_integer = e_integer;
	else if (*format == 'u')
			convertor->s_unsigned_decimal = e_unsigned_decimal;
	else if (*format == 'x')
			convertor->s_number_hexadecimal_capital = e_number_hexadecimal_capital;
	else if (*format == 'X')
			convertor->s_percent_sign = e_percent_sign;
	else
		return 7;
	return (5);
}