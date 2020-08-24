/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:31:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:58:10 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_eval_input(t_info *info)
{
	int					number;
	static	t_formatter	*functions_array[e_length] = {
	[e_char] = ft_solve_char,
	[e_string] = ft_solve_string,
	[e_pointer] = ft_solve_pointer,
	[e_decimal_int] = ft_solve_di,
	[e_u_dec_int] = ft_solve_uint,
	[e_u_hex_int] = ft_solve_hex,
	[e_percentage] = ft_solve_percent};

	info->format++;
	ft_eval_flag(info);
	ft_eval_width(info);
	ft_eval_precision(info);
	number = ft_select_format_specifier(info);
	functions_array[number](info);
}
