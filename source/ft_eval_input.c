/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:31:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/23 10:59:50 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_eval_input(t_info	*info)
{
	info->format++;
	ft_eval_flag(info);
	ft_eval_width(info);
	ft_eval_precision(info);
	int number;

	number = 0;
	if (*info->format == 'c')
		number = e_char;
	else if (*info->format == 's')
		number = e_string;
	else if (*info->format == 'p')
		number = e_pointer;
	else if (*info->format == 'd' || *info->format == 'i')
		number = e_decimal_int;
	else if (*info->format == 'u')
		number = e_u_dec_int;
	else if (*info->format == 'x' || *info->format == 'X')
		number = e_u_hex_int;
	else if (*info->format == '%')
		number = e_percentage;
	else
		write(1, "Error", 5);
	
	//Dispatch table
	t_formatter	*functions_array[e_length] = {
		[e_char] = ft_solve_char,
		[e_string] = ft_solve_string,
		[e_pointer] = ft_solve_pointer,
		[e_decimal_int] = ft_solve_di,
		[e_u_dec_int] = ft_solve_uint,
		[e_u_hex_int] = ft_solve_hex,
		[e_percentage] = ft_solve_percent,
	};

	functions_array[number](info);
}