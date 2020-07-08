/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_conversors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:19:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/07 23:27:34 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* cspdiuxX% */

/* Use structure tu save the data */

int ft_find_conversion(const char *format, int i)
{
	
	t_conversors  *convertor;
	
	if (format[i] == 'c')
		convertor->s_single_character = e_single_character;
	else if (format[i] == 's')
			convertor->s_string_characters = e_string_characters;
	else if (format[i] == 'p')
			convertor->s_pointer = e_pointer;
	else if (format[i] == 'd')
			convertor->s_decimal = e_decimal;
	else if (format[i] == 'i')
			convertor->s_integer = e_integer;
	else if (format[i] == 'u')
			convertor->s_unsigned_decimal = e_unsigned_decimal;
	else if (format[i] == 'x')
			convertor->s_number_hexadecimal_capital = e_number_hexadecimal_capital;
	else if (format[i] == 'X')
			convertor->s_percent_sign = e_percent_sign;
	else
		return i;
	return (i);
}